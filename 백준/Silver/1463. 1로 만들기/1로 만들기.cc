#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	int* dp = (int*)calloc((n + 1), sizeof(int));

	for (int i = 2; i < n + 1; i++) {
		dp[i] = dp[i - 1] + 1;

		if (i % 2 == 0) {
			dp[i] = (dp[i] > dp[i / 2] + 1) ? dp[i / 2] + 1 : dp[i];
		}

		if (i % 3 == 0) {
			dp[i] = (dp[i] > dp[i / 3] + 1) ? dp[i / 3] + 1 : dp[i];
		}
	}

	printf("%d\n", dp[n]);

	free(dp);
	return 0;
}