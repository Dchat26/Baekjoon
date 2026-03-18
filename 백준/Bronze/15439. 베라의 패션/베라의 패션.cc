#include <stdio.h>

int main(void) {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	int result = n * n - n;

	printf("%d\n", result);

	return 0;
}