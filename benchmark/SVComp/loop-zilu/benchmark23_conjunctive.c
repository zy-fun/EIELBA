void reach_error(void) {assert(0);}

extern int __VERIFIER_nondet_int(void);
extern _Bool __VERIFIER_nondet_bool(void);

void __VERIFIER_assert(int cond) {
  if (!cond) {
    reach_error();
  }
}

/* 23.cfg:
names=i j
beforeloop=
beforeloopinit=
precondition=i==0 && j==0
loopcondition=i<100
loop=j+=2; i++;
postcondition=j==200
afterloop=
learners= conj
*/
int main() {
  int i0, j0;
  int i = i0;
  int j = j0;
  
  if (!(i==0 && j==0)) return 0;
  int tau = 0;
  while (i<100) {
    tau += 1;
    j+=2;
    i++;
  }
  __VERIFIER_assert(j==200);
  return 0;
}
