#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	int** arr = (int**)malloc(n * sizeof(int*));
	if (arr == NULL) return -1;

	for (int i = 0; i < n; i++) {
		arr[i] = (int*)malloc((i + 1) * sizeof(int));
		if (arr[i] == NULL) break;

		for (int j = 0; j <= i; j++) {
			if (scanf("%d", &arr[i][j]) != 1) break;
		}
	}

	for (int i = 1; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0) {
				arr[i][j] += arr[i - 1][j];
			}
			else if (j == i) {
				arr[i][j] += arr[i - 1][j - 1];
			}
			else {
				arr[i][j] += (arr[i - 1][j - 1] > arr[i - 1][j]) ? arr[i - 1][j - 1] : arr[i - 1][j];
			}
		}
	}

	int max_val = arr[n - 1][0];
	for (int i = 1; i < n; i++) {
		if (max_val < arr[n - 1][i]) max_val = arr[n - 1][i];
	}

	printf("%d\n", max_val);

	for (int i = 0; i < n; i++) free(arr[i]);
	free(arr);
	return 0;
}