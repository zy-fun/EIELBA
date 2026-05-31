//#Termination
/*
 * Date: November 2013
 * Author: heizmann@informatik.uni-freiburg.de
 *
 * 
 */

typedef enum {false, true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
    int x;
	int y;
	int z;
    int y0, z0;
	y = y0;
	z = z0;
    if (__VERIFIER_nondet_int() != 0) {
        x = 1;
    } else {
        x = -1;
    }
    int tau = 0;
    while (y<100 && z<100) {
        tau += 1;
        y = y+x;
        z = z-x;
    }
    return 0;
}
