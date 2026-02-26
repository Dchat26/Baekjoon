#include <stdio.h>

void CalP(int total, int n) {
	int a = 0, b = 0;
	int CalPrice = 0;

	for (int i = 0; i < n; i++) {
		if (scanf("%d %d", &a, &b) != 2) return;

		CalPrice += a * b;
	}

	if (total == CalPrice) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}
}

int main(void) {
	int total_price = 0, n = 0;

	if (scanf("%d", &total_price) != 1) return -1;
	if (scanf("%d", &n) != 1) return -1;

	CalP(total_price, n);

	return 0;
}