#include <stdio.h>
#include <stdlib.h>

int ans[10];

void sq(int depth, int start, int m, int n) {
	if (depth == m) {
		for (int i = 0; i < m; i++) {
			printf((i == m - 1 ? "%d\n" : "%d "), ans[i]);
		}
		return;
	}

	for (int i = start; i <= n; i++) {
		ans[depth] = i;

		sq(depth + 1, i, m, n);
	}
}

int main(void) {
	int n = 0, m = 0;
	if (scanf("%d %d", &n, &m) != 2) return 0;

	sq(0, 1, m, n);

	return 0;
}