typedef enum {false, true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
    int i, x, y;
    int x0, y0;
    i = 0;
    x = x0;
    y = y0;
    int tau = 0;
    if (x!=0) {
        while (x > 0 && y > 0) {
            tau += 1;
            i = i + 1;
            x = (x - 1)- (y - 1);
        }
    }
    return 0;
}
