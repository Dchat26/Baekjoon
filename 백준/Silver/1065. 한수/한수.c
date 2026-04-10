#include <stdio.h>

int main(void) {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	int count = 0;
	for (int i = 1; i <= n; i++) {
		if (i < 100) {
			count += 1;
			continue;
		}

		int num = i;
		int current = num % 10;
		num /= 10;

		int nextnum = num % 10;
		int differ = current - nextnum;

		int is_TF = 1;
		while (num > 0) {
			current = num % 10;
			num /= 10;
			if (num == 0) break;

			nextnum = num % 10;
			if ((current - nextnum) != differ) {
				is_TF = 0;
				break;
			}
		}

		if (is_TF) count++;
	}

	printf("%d\n", count);

	return 0;
}
