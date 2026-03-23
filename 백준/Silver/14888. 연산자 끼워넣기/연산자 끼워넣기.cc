#include <stdio.h>
#include <stdlib.h>

void solve(int idx, int res, int* nlist, int n, 
	int add, int sub, int mul, int div, int* min_val, int* max_val) {
	if (idx == n) {
		if (res > (*max_val)) (*max_val) = res;
		if (res < (*min_val)) (*min_val) = res;
		return;
	}

	if (add > 0) {
		solve(idx + 1, res + nlist[idx], nlist, n, add - 1, sub, mul, div, min_val, max_val);
	}

	if (sub > 0) {
		solve(idx + 1, res - nlist[idx], nlist, n, add, sub - 1, mul, div, min_val, max_val);
	}

	if (mul > 0) {
		solve(idx + 1, res * nlist[idx], nlist, n, add, sub, mul - 1, div, min_val, max_val);
	}

	if (div > 0) {
		solve(idx + 1, res / nlist[idx], nlist, n, add, sub, mul, div - 1, min_val, max_val);
	}
}

int main(void) {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	int* nlist = (int*)malloc(n * sizeof(int));
	if (nlist == NULL) return -1;

	for (int i = 0; i < n; i++) {
		if (scanf("%d", &nlist[i]) != 1) break;
	}

	int add = 0, sub = 0, mul = 0, div = 0;
	if (scanf("%d %d %d %d", &add, &sub, &mul, &div) != 4) {
		free(nlist);
		return 0;
	}

	int max_val = -1000000001;
	int min_val = 1000000001;

	solve(1, nlist[0], nlist, n, add, sub, mul, div, &min_val, &max_val);

	printf("%d\n%d\n", max_val, min_val);

	free(nlist);
	return 0;
}