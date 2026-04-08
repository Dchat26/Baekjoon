#include <stdio.h>

int main(void) {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	int origin = n;
	int count = 0;

	while (1) {
		count++;
		int temp = (n / 10 + n % 10) % 10;
		n = (n % 10) * 10 + temp;

		if (origin == n) break;
	}

	printf("%d\n", count);

	return 0;
}
