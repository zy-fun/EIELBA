/*
 * Date: 2012-02-18
 * Author: heizmann@informatik.uni-freiburg.de
 *
 */

typedef enum {false, true} bool;

extern int __VERIFIER_nondet_int(void);

int main()
{
    int x, y, oldx;
	int x0, y0;
	x = x0;
	y = y0;
	int tau = 0;
	while (x >= 0 && y >= 0) {
		tau += 1;
		oldx = x;
		x = y - 1;
		y = oldx - 1;
	}
	return 0;
}
