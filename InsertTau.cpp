#include <clang/AST/AST.h>
#include <clang/AST/RecursiveASTVisitor.h>
#include <clang/Frontend/FrontendAction.h>
#include <clang/Frontend/CompilerInstance.h>
#include <clang/Rewrite/Core/Rewriter.h>
#include <clang/Tooling/CommonOptionsParser.h>
#include <clang/Tooling/Tooling.h>
#include <llvm/Support/CommandLine.h>

using namespace clang;
using namespace clang::tooling;

class LoopVisitor : public RecursiveASTVisitor<LoopVisitor> {
public:
    explicit LoopVisitor(Rewriter &R) : TheRewriter(R) {}

    bool VisitForStmt(ForStmt *FS) {
        insertTau(FS);
        return true;
    }

    bool VisitWhileStmt(WhileStmt *WS) {
        insertTau(WS);
        return true;
    }

private:
    Rewriter &TheRewriter;
    bool tauInserted = false;

    void insertTau(ForStmt *FS) {
        if (!FS) return;
        insertTauInternal(FS, FS->getBody());
    }

    void insertTau(WhileStmt *WS) {
        if (!WS) return;
        insertTauInternal(WS, WS->getBody());
    }

    void insertTauInternal(Stmt *LoopStmt, Stmt *Body) {
        SourceLocation startLoc = LoopStmt->getBeginLoc();

        // 只在第一次循环插入 tau 定义
        if (!tauInserted) {
            TheRewriter.InsertText(startLoc, "int tau = 0;\n", true, true);
            tauInserted = true;
        }

        // 在循环体开头插入 tau++
        if (CompoundStmt *CS = dyn_cast<CompoundStmt>(Body)) {
            SourceLocation bodyStart = CS->getLBracLoc().getLocWithOffset(1);
            TheRewriter.InsertText(bodyStart, "\n\ttau++;", true, true);
        } else {
            // 如果循环体不是大括号，就创建大括号并插入 tau++
            std::string originalStmt;
            llvm::raw_string_ostream os(originalStmt);
            Body->printPretty(os, nullptr, PrintingPolicy(LangOptions()));
            std::string newBody = "{\n\ttau++;\n" + os.str() + "\n}";
            TheRewriter.ReplaceText(Body->getSourceRange(), newBody);
        }
    }
};

class LoopASTConsumer : public ASTConsumer {
public:
    explicit LoopASTConsumer(Rewriter &R) : Visitor(R) {}
    void HandleTranslationUnit(ASTContext &Context) override {
        Visitor.TraverseDecl(Context.getTranslationUnitDecl());
    }

private:
    LoopVisitor Visitor;
};

class LoopFrontendAction : public ASTFrontendAction {
public:
    void EndSourceFileAction() override {
        TheRewriter.getEditBuffer(TheRewriter.getSourceMgr().getMainFileID()).write(llvm::outs());
    }

    std::unique_ptr<ASTConsumer> CreateASTConsumer(CompilerInstance &CI, StringRef file) override {
        TheRewriter.setSourceMgr(CI.getSourceManager(), CI.getLangOpts());
        return std::unique_ptr<ASTConsumer>(new LoopASTConsumer(TheRewriter));
    }

private:
    Rewriter TheRewriter;
};

static llvm::cl::OptionCategory ToolCategory("insert-tau options");

int main(int argc, const char **argv) {
    CommonOptionsParser OptionsParser(argc, argv, ToolCategory); // Clang 10 兼容写法
    ClangTool Tool(OptionsParser.getCompilations(), OptionsParser.getSourcePathList());
    return Tool.run(newFrontendActionFactory<LoopFrontendAction>().get());
}
