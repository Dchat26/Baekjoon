#include <stdio.h>
#include <math.h>

int main(void) {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	int result = (int)pow(2, n) + 0.5;

	printf("%d\n", result);

	return 0;
}