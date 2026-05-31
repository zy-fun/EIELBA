void reach_error(void) {assert(0);}

extern int __VERIFIER_nondet_int(void);
extern _Bool __VERIFIER_nondet_bool(void);

void __VERIFIER_assert(int cond) {
  if (!cond) {
    reach_error();
  }
}

/* 04.cfg:
names=k j n
beforeloop=
beforeloopinit=
precondition=n>=1 && k>=n && j==0
loopcondition=j<=n-1
loop=j++; k--;
postcondition=k>=0
afterloop=
learners= conj
*/
int main() {
  int k0, j0, n0;
  int k = k0;
  int j = j0;
  int n = n0;
  
  if (!(n>=1 && k>=n && j==0)) return 0;
  int tau = 0;
  while (j<=n-1) {
    tau += 1;
    j++;
    k--;
  }
  __VERIFIER_assert(k>=0);
  return 0;
}
