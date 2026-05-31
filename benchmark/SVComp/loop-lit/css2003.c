// Source: Michael Colon, Sriram Sankaranarayanan, Henny Sipma: "Linear
// Invariant Generation using Non-Linear Constraint Solving", CAV 2003.

#include "assert.h"
int main() {
    int i0, j0, k0;
    int i,j,k;
    i = i0;
    j = j0;
    k = k0;
    if (!(0 <= k && k <= 1)) return 0;
    int tau = 0;
    while (i < 10000) {
    tau += 1;
	i = i + 1;
	j = j + k;
	k = k - 1;
	__VERIFIER_assert(1 <= i + k && i + k <= 2 && i >= 1);
    }
    return 0;
}
