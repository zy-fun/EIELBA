void reach_error(void) {assert(0);}

extern int __VERIFIER_nondet_int(void);
extern _Bool __VERIFIER_nondet_bool(void);

void __VERIFIER_assert(int cond) {
  if (!cond) {
    reach_error();
  }
}

/* 33.cfg:
names=x
beforeloop=
beforeloopinit=
precondition=x>=0
loopcondition=x<100 && x>=0
loop=x++;
postcondition=x>=100
afterloop=
learners= linear
*/
int main() {
  int x0;
  int x = x0;
  
  if (!(x>=0)) return 0;
  int tau = 0;
  while (x<100 && x>=0) {
    tau += 1;
    x++;
  }
  __VERIFIER_assert(x>=100);
  return 0;
}
