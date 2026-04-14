#include <stdio.h>

int main(void) {
	int n = 0, s = 0;
	if (scanf("%d %d", &n, &s) != 2) return 0;

	int target = (n / 100) * 100;
	while (target % s != 0) target++;

	int result = target % 100;

	printf("%02d\n", result);

	return 0;
}