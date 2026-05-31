void reach_error(void) {assert(0);}

extern int __VERIFIER_nondet_int(void);
extern _Bool __VERIFIER_nondet_bool(void);

void __VERIFIER_assert(int cond) {
  if (!cond) {
    reach_error();
  }
}

/* 34.cfg:
names=j k n
precondition= (j==0) && (k==n) && (n>0)
loopcondition=j<n && n>0
loop=j++;k--;
postcondition= (k == 0)
learners= conj
*/
int main() {
  int j0, k0, n0;
  int j = j0;
  int k = k0;
  int n = n0;
  if (!((j==0) && (k==n) && (n>0))) return 0;
  int tau = 0;
  while (j<n && n>0) {
    tau += 1;
    j++;k--;
  }
  __VERIFIER_assert((k == 0));
  return 0;
}
