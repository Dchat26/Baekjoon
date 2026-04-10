#include <stdio.h>

int main(void) {
	int a = 0, b = 0;
	if (scanf("%d", &a) != 1 || scanf("%d", &b) != 1) return 0;

	printf("%d\n", a + b);

	return 0;
}