extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "underapprox_1-1.c", 3, "reach_error"); }

void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: {reach_error();abort();}
  }
  return;
}

int main(void) {
  unsigned int x0;
  unsigned int y0;
  unsigned int x = x0;
  unsigned int y = y0;

  int tau = 0;
  while (x < 6) {
    tau += 1;
    x++;
    y *= 2;
  }

  __VERIFIER_assert(y != 64);
}
