typedef enum {false,true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
    int i;
    int j;
    int k;
    int t;
    int i0, j0, k0;
    i = i0;
    j = j0;
    k = k0;
    int tau = 0;
    while (i <= 100 && j <= k) {
        tau += 1;
        i = j;
        j = i + 1;
        k = k - 1;
    }
    
    return 0;
}
