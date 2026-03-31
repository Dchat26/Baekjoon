#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	int* arr = (int*)malloc(n * sizeof(int));
	if (arr == NULL) return -1;

	for (int i = 0; i < n; i++) {
		if (scanf("%d", &arr[i]) != 1) break;
	}

	int current_sum = arr[0];
	int max_val = arr[0];

	for (int i = 1; i < n; i++) {
		current_sum = (arr[i] > current_sum + arr[i]) ? arr[i] : current_sum + arr[i];
		
		if (current_sum > max_val) max_val = current_sum;
	}

	printf("%d\n", max_val);

	free(arr);
	return 0;
}