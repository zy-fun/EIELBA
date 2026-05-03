/*
 * Program used in the experimental evaluation of the following paper.
 * 2010SAS - Alias,Darte,Feautrier,Gonnord, Multi-dimensional Rankings, Program Termination, and Complexity Bounds of Flowchart Programs
 *
 * Date: 2014
 * Author: Caterina Urban
 */

typedef enum {false, true} bool;

extern int __VERIFIER_nondet_int(void);

int main() {
	int i0, j0, k0, tmp0;
    int i, j, k, tmp;
	i = i0;
	j = j0;
	k = k0;
	tmp = tmp0;
	int tau = 0;
	while (i <= 100 && j <= k) {
		tau += 1;
		tmp = i;
		i = j;
		j = tmp + 1;
		k = k - 1;
	}
	return 0;
}
