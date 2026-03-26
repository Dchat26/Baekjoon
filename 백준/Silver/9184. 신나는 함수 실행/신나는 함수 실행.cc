#include <stdio.h>

int memo[21][21][21];

int w(int a, int b, int c) {
	if (a <= 0 || b <= 0 || c <= 0) return 1;

	if (a > 20 || b > 20 || c > 20) return w(20, 20, 20);
	
	if (memo[a][b][c] != 0) return memo[a][b][c];

	if (a < b && b < c) {
		memo[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
	}
	else {
		memo[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
	}

	return memo[a][b][c];
}

int main(void) {
	while (1) {
		int a = 0, b = 0, c = 0;
		if (scanf("%d %d %d", &a, &b, &c) != 3) break;
		if (a == -1 && b == -1 && c == -1) break;

		int result = w(a, b, c);

		printf("w(%d, %d, %d) = %d\n", a, b, c, result);
	}

	return 0;
}