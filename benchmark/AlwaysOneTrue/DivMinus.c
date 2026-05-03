typedef enum {false,true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
    int x0, y0;
    int x;
    int y;
    int res;
    x = x0;
    y = y0;
    res = 0;
    int tau = 0;
    
    while (x >= y && y > 0) {
      tau += 1;
      x = x-y;
      res = res + 1;
    }
    
    return 0;
}
