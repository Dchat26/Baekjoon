#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(void) {
	int n = 0, m = 0;
	if (scanf("%d %d", &n, &m) != 2) return 0;

	bool* arr = (bool*)malloc((m + 1) * sizeof(bool));
	if (arr == NULL) return 1;

	memset(arr, true, (m + 1) * sizeof(bool));

	arr[0] = arr[1] = false;
	for (long long i = 2; i * i <= m; i++) {
		if (arr[i]) {
			for (long long j = i * i; j < m + 1; j += i) {
				arr[j] = false;
			}
		}
	}

	for (int i = n; i < m + 1; i++) {
		if (arr[i]) printf("%d\n", i);
	}

	free(arr);
	return 0;
}