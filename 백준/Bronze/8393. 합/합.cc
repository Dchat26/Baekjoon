#include <stdio.h>

void Total(int n) {
	int total = 0;

	for (int i = 1; i <= n; i++) {
		total += i;
	}

	printf("%d\n", total);
}

int main(void) {
	int n = 0;

	if (scanf("%d", &n) != 1) return -1;

	Total(n);

	return 0;
}