void reach_error(void) {assert(0);}

extern int __VERIFIER_nondet_int(void);
extern _Bool __VERIFIER_nondet_bool(void);

void __VERIFIER_assert(int cond) {
  if (!cond) {
    reach_error();
  }
}

/* 18.cfg:
names=i k n
precondition= (i==0) && (k==0) && (n>0)
loopcondition=i < n
loop=i++;k++;
postcondition= (i == k) && (k == n)
learners= conj
*/
int main() {
  int i0, k0, n0;
  int i = i0;
  int k = k0;
  int n = n0;
  if (!((i==0) && (k==0) && (n>0))) return 0;
  int tau = 0;
  while (i < n) {
    tau += 1;
    i++;k++;
  }
  __VERIFIER_assert((i == k) && (k == n));
  return 0;
}
