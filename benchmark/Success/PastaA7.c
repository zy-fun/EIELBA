typedef enum {false,true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
    int x;
    int y;
    int z;
    int x0, y0, z0;
    x = x0;
    y = y0;
    z = z0;
    int tau = 0;
    while (x > y && x > z) {
        tau += 1;
        y = y+1;
        z = z+1;
    }
    
    return 0;
}
