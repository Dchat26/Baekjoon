#include <stdio.h>

int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	
	return a;
}

int main(void) {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	int start = 0;
	if (scanf("%d", &start) != 1) return 0;

	int prev = start;
	int g = 0;
	for (int i = 0; i < n - 1; i++) {
		int curr = 0;
		if (scanf("%d", &curr) != 1) return 0;

		int interval = curr - prev;

		if (i == 0) {
			g = interval;
		}
		else {
			g = gcd(g, interval);
		}

		prev = curr;
	}
	int end = prev;

	int result = ((end - start) / g) + 1 - n;

	printf("%d\n", result);
	
	return 0;
}