#include <stdio.h>
#include <math.h>

int main(void) {
	long long n = 0;
	if (scanf("%lld", &n) != 1) return 0;

	printf("%lld\n", (long long)sqrt((double)n));

	return 0;
}