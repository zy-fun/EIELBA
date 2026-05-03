typedef enum {false, true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
    int x, y, z;
    int x0, y0, z0;
    x = x0;
    y = y0;
    z = z0;
    int tau = 0;
    while (y > 0 && x >= z) {
        tau += 1;
        z = z + y;
    }
    return 0;
}
