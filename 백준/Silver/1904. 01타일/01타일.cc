#include <stdio.h>

int main(void) {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	if (n == 1) {
		printf("1");
		return 0;
	}
	else if (n == 2) {
		printf("2");
		return 0;
	}

	int a = 1;
	int b = 2;
	for (int i = 3; i <= n; i++) {
		int tmp = a;

		a = b;
		b = (tmp + b) % 15746;
	}

	printf("%d", b);

	return 0;
}