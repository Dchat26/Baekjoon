#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

#define NUM 246912

int main(void) {
	bool* check = (bool*)malloc((NUM + 1) * sizeof(bool));
	if (check == NULL) return 1;

	memset(check, true, (NUM + 1) * sizeof(bool));
	check[0] = check[1] = false;
	for (int i = 2; i * i <= NUM; i++) {
		if (check[i]) {
			for (int j = i * i; j <= NUM; j += i) {
				check[j] = false;
			}
		}
	}

	int* count_check = (int*)malloc((NUM + 1) * sizeof(int));
	if (count_check == NULL) {
		free(check);
		return 1;
	}

	count_check[0] = 0;
	for (int i = 1; i <= NUM; i++) {
		count_check[i] = count_check[i - 1] + (check[i] ? 1 : 0);
	}

	while (1) {
		int n = 0;
		if (scanf("%d", &n) != 1 || n == 0) break;

		printf("%d\n", count_check[2 * n] - count_check[n]);
	}

	free(count_check);
	free(check);
	return 0;
}