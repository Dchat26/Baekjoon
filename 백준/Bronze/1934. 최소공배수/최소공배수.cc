#include <stdio.h>
#include <stdlib.h>

long long gcd(long long a, long long b) {
	while (b != 0) {
		long long r = a % b;
		a = b;
		b = r;
	}
	
	return a;
}

int main(void) {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	long long* arr = (long long*)malloc(n * sizeof(long long));
	for (int i = 0; i < n; i++) {
		long long a = 0, b = 0;
		if (scanf("%lld %lld", &a, &b) != 2) return 0;

		long long g = gcd(a, b);
		long long l = (a / g) * b;

		arr[i] = l;
	}

	for (int i = 0; i < n; i++) printf("%lld\n", arr[i]);
	
	free(arr);
	return 0;
}