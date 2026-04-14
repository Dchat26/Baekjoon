#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	int* answer = (int*)malloc(n * sizeof(int));
	if (answer == NULL) return -1;

	for (int i = 0; i < n; i++) {
		int a = 0, b = 0;
		if (scanf("%d %d", &a, &b) != 2) break;

		int base = a % 10;
		if (base == 0) {
			answer[i] = 10;
			continue;
		}

		int power = b % 4;
		if (power == 0) power = 4;

		int result = 1;
		for (int j = 0; j < power; j++) {
			result = (result * base) % 10;
		}
		answer[i] = result;
	}

	for (int i = 0; i < n; i++) {
		printf("%d\n", answer[i]);
	}

	free(answer);
	return 0;
}