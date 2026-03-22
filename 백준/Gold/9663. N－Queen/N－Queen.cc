#include <stdio.h>
#include <stdlib.h>

void Queen(int row, int n, int* col, int* diag1, int* diag2, int* count) {
	if (row == n) {
		(*count)++;
		return;
	}

	for (int i = 0; i < n; i++) {
		if (!col[i] && !diag1[row + i] && !diag2[row - i + n]) {
			col[i] = diag1[row + i] = diag2[row - i + n] = 1;

			Queen(row + 1, n, col, diag1, diag2, count);

			col[i] = diag1[row + i] = diag2[row - i + n] = 0;
		}
	}
}

int main(void) {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	int* col = (int*)calloc(n, sizeof(int));
	int* diag1 = (int*)calloc((2 * n), sizeof(int));
	int* diag2 = (int*)calloc((2 * n), sizeof(int));

	int count = 0;

	Queen(0, n, col, diag1, diag2, &count);

	printf("%d\n", count);


	free(diag2);
	free(diag1);
	free(col);
	return 0;
}