/* Benchmark used to verify Chimdyalwar, Bharti, et al. "VeriAbs: Verification by abstraction (competition contribution)." 
International Conference on Tools and Algorithms for the Construction and Analysis of Systems. Springer, Berlin, Heidelberg, 2017.*/

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "simple_vardep_1.c", 6, "reach_error"); }
void __VERIFIER_assert(int cond)
{
  if (!(cond)) {
    ERROR: {reach_error();abort();}
  }
  return;
}

int main()
{
  unsigned int i0, j0, k0;
  unsigned int i = i0;
  unsigned int j = j0;
  unsigned int k = k0;

  int tau = 0;
  while (k < 0x0fffffff) {
    tau += 1;
    i = i + 1;
    j = j + 2;
    k = k + 3;

    __VERIFIER_assert(k == (i + j));
  }

}
