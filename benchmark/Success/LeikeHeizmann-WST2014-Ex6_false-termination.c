/*
 * Program from Example 6 of
 * 2014WST - Leike, Heizmann - Geometric Series as Nontermination Arguments for Linear Lasso Programs
 *
 * Date: 2014-06-29
 * Author: Jan Leike
 */

typedef enum {false, true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
    int a, b;
	int a0, b0;
	a = a0;
	b = b0;
	int tau = 0;
	while (a >= 1 && b >= 1) {
		tau += 1;
		a = 2*a;
		b = 3*b;
	}
	return 0;
}
