#include <stdio.h>

long long fac(int num) {
	if (num <= 1) return 1;

	return num * fac(num - 1);
}

int main(void) {
	long long n = 0;
	if (scanf("%lld", &n) != 1) return 0;
	if (0 > n || n > 20) return 0;

	long long result = fac(n);

	printf("%lld\n", result);

	return 0;
}