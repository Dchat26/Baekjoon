#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	int** arr = (int**)malloc(n * sizeof(int*));
	if (arr == NULL) return -1;

	for (int i = 0; i < n; i++) {
		arr[i] = (int*)malloc(3 * sizeof(int));
		if (arr[i] == NULL) break;

		for (int j = 0; j < 3; j++) {
			if (scanf("%d", &arr[i][j]) != 1) break;
		}
	}

	for (int i = 1; i < n; i++) {
		arr[i][0] += (arr[i - 1][1] < arr[i - 1][2]) ? arr[i - 1][1] : arr[i - 1][2];
		arr[i][1] += (arr[i - 1][0] < arr[i - 1][2]) ? arr[i - 1][0] : arr[i - 1][2];
		arr[i][2] += (arr[i - 1][0] < arr[i - 1][1]) ? arr[i - 1][0] : arr[i - 1][1];
	}

	int min_val = arr[n - 1][0];
	for (int i = 1; i < 3; i++) {
		if (min_val > arr[n - 1][i]) min_val = arr[n - 1][i];
	}

	printf("%d\n", min_val);

	for (int i = 0; i < n; i++) free(arr[i]);
	free(arr);
	return 0;
}