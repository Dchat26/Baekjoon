#include <stdio.h>

int main(void) {
	int a, b;

	while (scanf("%d %d", &a, &b) == 2) {
		printf("%d\n%d\n%d\n%d\n%d\n", a + b, a - b, a * b, a / b, a % b);
	}

	return 0;
}