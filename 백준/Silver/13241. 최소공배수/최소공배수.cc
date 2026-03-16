#include <stdio.h>

long long gcd(long long a, long long b) {
	while (b != 0) {
		long long r = a % b;
		a = b;
		b = r;
	}
	
	return a;
}

int main(void) {
	long long a = 0, b = 0;
	if (scanf("%lld %lld", &a, &b) != 2) return 0;

	long long g = gcd(a, b);
	long long l = (a / g) * b;

	printf("%lld\n", l);
	
	return 0;
}