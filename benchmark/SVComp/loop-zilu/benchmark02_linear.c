void reach_error(void) {assert(0);}

extern int __VERIFIER_nondet_int(void);
extern _Bool __VERIFIER_nondet_bool(void);

void __VERIFIER_assert(int cond) {
  if (!cond) {
    reach_error();
  }
}

/* 02.cfg:
names=l
beforeloop= int n; int i;
beforeloopinit= i = l;
precondition= l>0
loopcondition= i < n
loop=i++;
postcondition=l>=1
afterloop=
learners= linear
*/
int main() {
  int n0, i0, l0;
  i0 = l0;
  int n = n0;
  int i = i0;
  int l = l0;

  if (!(l>0)) return 0;
  int tau = 0;
  while (i < n) {
    tau += 1;
    i++;
  }
  __VERIFIER_assert(l>=1);
  return 0;
}
