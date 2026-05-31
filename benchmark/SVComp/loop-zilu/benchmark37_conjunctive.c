void reach_error(void) {assert(0);}

extern int __VERIFIER_nondet_int(void);
extern _Bool __VERIFIER_nondet_bool(void);

void __VERIFIER_assert(int cond) {
  if (!cond) {
    reach_error();
  }
}

/* 37.cfg:
names=x y
precondition=x == y && x >= 0
loopcondition=x > 0
loop=x--; y--;
postcondition=y>=0
learners=conj
*/
int main() {
  int x0, y0;
  int x = x0;
  int y = y0;
  if (!(x == y && x >= 0)) return 0;
  int tau = 0;
  while (x > 0) {
    tau += 1;
    x--;
    y--;
  }
  __VERIFIER_assert(y>=0);
  return 0;
}
