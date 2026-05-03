typedef enum {false, true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
    int c, i, j, k, tmp;
    int i0, j0, k0;
    i = i0;
    j = j0;
    k = k0;
    tmp = __VERIFIER_nondet_int();
    c = 0;
    int tau = 0;
    while ((i <= 100) && (j <= k)) {
        tau += 1;
        tmp = i;
        i = j;
        j = tmp + 1;
        k = k - 1;
        c = c + 1;
    }
    return 0;
}
