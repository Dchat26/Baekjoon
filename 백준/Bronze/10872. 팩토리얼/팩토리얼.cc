#include <stdio.h>

int main(void) {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;
	if (0 > n || n > 12) return 0;

	int result = 1;
	for (int i = 1; i <= n; i++) {
		result *= i;
	}

	printf("%d\n", result);

	return 0;
}