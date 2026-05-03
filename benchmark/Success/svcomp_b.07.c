typedef enum {false, true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
    int c;
    int x, y, z;
    int x0, y0, z0;
    x = x0;
    y = y0;
    z = z0;
    c = 0;
    int tau = 0;
    while ((x > z) && (y > z)) {
        tau += 1;
        x = x - 1;
        y = y - 1;
        c = c + 1;
    }
    return 0;
}
