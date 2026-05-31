// Source: Credited to Anubhav Gupta
// appears in Ranjit Jhala, Ken McMillan: "A Practical and Complete Approach
// to Predicate Refinement", TACAS 2006

#include "assert.h"

int main() {
    int x0, y0, z0;

    if (!(x0 >= 0 && x0 <= 10000)) return 0;
    if (!(y0 >= 0)) return 0;
    int x = x0;
    int y = y0;
    int z = z0;
    int tau = 0;
    while(x != 0) {
        tau += 1;
        x --;
        y -= 2;
        z ++;
    }
    if (x0 == y0) {
        __VERIFIER_assert(y == -z);
    }
    return 0;
}
