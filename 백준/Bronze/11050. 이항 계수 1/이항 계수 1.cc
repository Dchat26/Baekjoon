#include <stdio.h>

int fac(int num) {
	int val = 1;
	for (int i = 1; i <= num; i++) {
		val *= i;
	}

	return val;
}

int main(void) {
	int n = 0, k = 0;
	if (scanf("%d %d", &n, &k) != 2) return 0;
	if (1 > n || n > 10 || 0 > k || k > n) return 0;

	int nfac = fac(n);
	int kfac = fac(k);
	int nkfac = fac(n - k);

	int result = nfac / (kfac * nkfac);

	printf("%d\n", result);

	return 0;
}