#include <stdio.h>

int getMax(int a, int b, int c) {
	int max = a;

	if (b > max) max = b;
	if (c > max) max = c;
	
	return max;
}

int calPrize(int a, int b, int c) {
	if (a == b && b == c) {
		return 10000 + (a * 1000);
	}
	else if (a == b || a == c) {
		return 1000 + (a * 100);
	}
	else if (b == c) {
		return 1000 + (b * 100);
	}
	else {
		return 100 * getMax(a, b, c);
	}
}

int main(void) {
	int a = 0, b = 0, c = 0;

	if (scanf("%d %d %d", &a, &b, &c) != 3) return -1;

	printf("%d\n", calPrize(a, b, c));

	return 0;
}