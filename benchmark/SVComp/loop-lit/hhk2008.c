// Source: Thomas A. Henzinger, Thibaud Hottelier, Laura Kovacs: "Valigator:
// A verification Tool with Bound and Invariant Generation", LPAR 2008

#include "assert.h"

int main() {
    int res0;
    int cnt0;
    int res, cnt;
    if (!(res0 <= 1000000)) return 0;
    if (!(0 <= cnt0 && cnt0 <= 1000000)) return 0;
    res = res0;
    cnt = cnt0;
    int tau = 0;
    while (cnt > 0) {
    tau += 1;
	cnt = cnt - 1;
	res = res + 1;
    }
    // __VERIFIER_assert(res == a + b);
    return 0;
}
