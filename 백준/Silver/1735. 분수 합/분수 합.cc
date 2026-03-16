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
	int a1 = 0, a2 = 0, b1 = 0, b2 = 0;
	if (scanf("%d %d %d %d", &a1, &a2, &b1, &b2) != 4) return 0;

	long long up = (long long)a1 * b2 + (long long)a2 * b1;
	long long down = (long long)a2 * b2;

	long long g = gcd(up, down);

	printf("%lld %lld\n", up / g, down / g);
	
	return 0;
}