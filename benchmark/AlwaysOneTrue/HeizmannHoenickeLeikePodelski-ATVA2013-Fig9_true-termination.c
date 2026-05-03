/*
 * Program from Figure 9 of
 * 2013ATVA - Heizmann, Hoenicke, Leike, Podelski - Linear Ranking for Linear Lasso Programs
 *
 * Date: 2014-06-29
 * Author: Jan Leike
 */

typedef enum {false, true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
	int x0, y0, z0;
    int x, y, z;
	x = x0;
	y = y0;
	z = z0;
	int tau = 0;
	if (2*y >= z) {
    	while (x >= 0 && z == 1) {
			tau += 1;
	    	x = x - 2*y + 1;
	    }
	}
	return 0;
}
