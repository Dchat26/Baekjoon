#include <stdio.h>
#include <stdlib.h>

long long dp[31][31];

void set_dp() {
	for (int i = 0; i <= 30; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || j == i) {
				dp[i][j] = 1;
			}
			else {
				dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
			}
		}
	}
}

int main(void) {
	int t = 0;
	if (scanf("%d", &t) != 1) return 0;

	set_dp();

	long long* arr = (long long*)malloc(t * sizeof(long long));
	if (arr == NULL) return -1;

	for (int i = 0; i < t; i++) {
		int n = 0, k = 0;
		if (scanf("%d %d", &n, &k) != 2) {
			free(arr);
			break;
		}

		arr[i] = dp[k][n];
	}

	for (int i = 0; i < t; i++) {
		printf("%lld\n", arr[i]);
	}

	free(arr);
	return 0;
}