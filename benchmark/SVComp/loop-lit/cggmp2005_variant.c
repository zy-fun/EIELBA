// Source: A. Costan, S. Gaubert, E. Goubault, M. Martel, S. Putot: "A Policy
// Iteration Algorithm for Computing Fixed Points in Static Analysis of
// Programs", CAV 2005

#include "assert.h"

int main() {
    int lo0 = 0, mid0, hi0;
    int lo = lo0, mid = mid0, hi = hi0;
    // lo = 0;
    // mid = __VERIFIER_nondet_int();
    if (!(mid > 0 && mid <= 10000)) return 0;
    hi = 2*mid;
    int tau = 0;
    while (mid > 0) {
        tau += 1;
        lo = lo + 1;
        hi = hi - 1;
        mid = mid - 1;
    }
    __VERIFIER_assert(lo == hi);
    return 0;
}
