#include <stdio.h>

void Mul(int n) {
	int a = 0, b = 0;

	for (int i = 0; i < n; i++) {
		if (scanf("%d %d", &a, &b) != 2) return;

		printf("%d\n", a + b);
	}
}

int main(void) {
	int n = 0;

	if (scanf("%d", &n) != 1) return -1;

	Mul(n);

	return 0;
}