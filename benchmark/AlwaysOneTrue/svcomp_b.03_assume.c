typedef enum {false, true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
    int x, y;
    int x0, y0;
    x = x0;
    y = y0;
    int tau = 0;
    while (x > 0 && x > y) {
        tau += 1;
       y = y + x;
    }
    return 0;
}
