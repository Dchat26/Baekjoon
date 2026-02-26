#include <stdio.h>

void LongP(int n) {
	int c = n / 4;

	for (int i = 0; i < c; i++) {
		printf("long ");
	}

	printf("int\n");
}

int main(void) {
	int n = 0;

	if (scanf("%d", &n) != 1) return -1;

	LongP(n);

	return 0;
}