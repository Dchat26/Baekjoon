#include <stdio.h>

int main(void) {
	int a = 0;
	char b[4];

	scanf("%d %s", &a, b);
	int res3 = a * (b[2] - '0');
	int res4 = a * (b[1] - '0');
	int res5 = a * (b[0] - '0');
	int res6 = res3 + (res4 * 10) + (res5 * 100);

	printf("%d\n%d\n%d\n%d\n", res3, res4, res5, res6);

	return 0;
}