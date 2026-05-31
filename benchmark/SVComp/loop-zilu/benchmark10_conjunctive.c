void reach_error(void) {assert(0);}

extern int __VERIFIER_nondet_int(void);
extern _Bool __VERIFIER_nondet_bool(void);

void __VERIFIER_assert(int cond) {
  if (!cond) {
    reach_error();
  }
}

/* 10.cfg:
names=i c
beforeloop=
beforeloopinit=
precondition=c==0 && i==0
loopcondition=i<100
loop=c=c+i; i=i+1; if (i<=0) break;
postcondition=c>=0
afterloop=
learners= conj
*/
int main() {
  int i0, c0;
  int i = i0;
  int c = c0;
  
  if (!(c==0 && i==0)) return 0;
  int tau = 0;
  while (i<100) {
    tau += 1;
    c=c+i;
    i=i+1;
    if (i<=0) break;
  }
  __VERIFIER_assert(c>=0);
  return 0;
}
