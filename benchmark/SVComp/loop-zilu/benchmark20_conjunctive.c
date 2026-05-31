void reach_error(void) {assert(0);}

extern int __VERIFIER_nondet_int(void);
extern _Bool __VERIFIER_nondet_bool(void);

void __VERIFIER_assert(int cond) {
  if (!cond) {
    reach_error();
  }
}

/* 20.cfg:
names=i n sum
beforeloop=
beforeloopinit=
precondition=i==0 && n>=0 && n<=100 && sum==0
loopcondition=i<n
loop=sum = sum + i; i++;
postcondition=sum>=0
afterloop=
learners= conj
*/
int main() {
  int i0, n0, sum0;
  int i = i0;
  int n = n0;
  int sum = sum0;
  
  if (!(i==0 && n>=0 && n<=100 && sum==0)) return 0;
  int tau = 0;
  while (i<n) {
    tau += 1;
    sum = sum + i;
    i++;
  }
  __VERIFIER_assert(sum>=0);
  return 0;
}
