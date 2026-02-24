#include <stdio.h>

int main(void) {
	int a = 0, b = 0, c = 0;

	scanf("%d %d %d", &a, &b, &c);
	int res1 = (a + b) % c;
	int res2 = ((a % c) + (b % c)) % c;
	int res3 = (a * b) % c;
	int res4 = ((a % c) * (b % c)) % c;

	printf("%d\n%d\n%d\n%d\n", res1, res2, res3, res4);
}