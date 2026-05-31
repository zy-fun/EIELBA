void reach_error(void) {assert(0);}

extern int __VERIFIER_nondet_int(void);
extern _Bool __VERIFIER_nondet_bool(void);

void __VERIFIER_assert(int cond) {
  if (!cond) {
    reach_error();
  }
}

/* 05.cfg:
names=x y n
beforeloop=
beforeloopinit=
precondition=x>=0 && x<=y && y<n
loopcondition=x<n
loop=x++; if (x>y) y++;
postcondition=y==n
afterloop=
learners= conj
*/
int main() {
  int x0, y0, n0;
  int x = x0;
  int y = y0;
  int n = n0;
  
  if (!(x>=0 && x<=y && y<n)) return 0;
  int tau = 0;
  while (x<n) {
    tau += 1;
    x++;
    if (x>y) y++;
  }
  __VERIFIER_assert(y==n);
  return 0;
}
