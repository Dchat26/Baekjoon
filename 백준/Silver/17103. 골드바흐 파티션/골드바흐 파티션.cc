#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

#define NUM 1000000

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

	int n = 0;
	if (scanf("%d", &n) != 1) {
		free(check);
		return 0;
	}

	int* arr = (int*)malloc(n * sizeof(int));
	if (arr == NULL) {
		free(check);
		return 1;
	}

	for (int i = 0; i < n; i++) {
		int m = 0;
		if (scanf("%d", &m) != 1) {
			free(arr);
			free(check);
			return 0;
		}

		int count = 0;
		for(int j = 2; j <= m / 2; j++) {
			if (check[j]) {
				if (check[m - j]) {
					count++;
				}
			}
		}
		arr[i] = count;
	}

	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}

	free(arr);
	free(check);
	return 0;
}