// Source: Sumit Gulwani, Saurabh Srivastava, Ramarathnam Venkatesan: "Program
// Analysis as Constraint Solving", PLDI 2008.

#include "assert.h"
int main() {
    int x0, y0;
    int x,y;
    x = x0;
    y = y0;
    if (!(-1000 < y && y < 10000)) return 0;
    int tau = 0;
    while (x < 0) {
    tau += 1;
	x = x + y;
	y++;
    }
    __VERIFIER_assert(y > 0);
    return 0;
}
