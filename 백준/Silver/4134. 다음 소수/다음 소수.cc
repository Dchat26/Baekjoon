#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool is_TF(long long num) {
	if (num < 2) return false;
	if (num == 2 || num == 3) return true;
	if (num % 2 == 0 || num % 3 == 0) return false;

	for (int i = 5; i <= (long long)sqrt(num); i += 2) {
		if (num % i == 0) return false;
	}
	return true;
}

int main(void) {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;
	if (n <= 0) return 0;

	long long* arr = (long long*)malloc(n * sizeof(long long));
	if (arr == NULL) return 1;

	for (int i = 0; i < n; i++) {
		long long num = 0;
		if (scanf("%lld", &num) != 1) return 0;

		if (num <= 2) {
			arr[i] = 2;
			continue;
		}
		
		if (num == 3) {
			arr[i] = 3;
			continue;
		}

		long long target = num;
		while (1) {
			if (is_TF(target)) {
				arr[i] = target;
				break;
			}

			target++;
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%lld\n", arr[i]);
	}

	free(arr);
	return 0;
} 