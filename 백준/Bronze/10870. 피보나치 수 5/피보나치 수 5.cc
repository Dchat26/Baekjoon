#include <stdio.h>

int fibo(int num) {
	if (num == 0) return 0;
	if (num == 1) return 1;

	return fibo(num - 1) + fibo(num - 2);
}

int main(void) {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;
	if (0 > n || n > 20) return 0;

	int result = fibo(n);

	printf("%d\n", result);

	return 0;
}