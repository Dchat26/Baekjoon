#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
	int n1 = *(int*)a;
	int n2 = *(int*)b;

	if (n1 < n2) return -1;
	if (n1 > n2) return 1;
	return 0;
}

int main(void) {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	int* arr = (int*)malloc(n * sizeof(int));
	if (arr == NULL) return -1;

	for (int i = 0; i < n; i++) {
		if (scanf("%d", &arr[i]) != 1) break;
	}

	qsort(arr, n, sizeof(int), compare);

	long long result = (long long)arr[0] * (long long)arr[n - 1];

	printf("%lld\n", result);

	free(arr);
	return 0;
}