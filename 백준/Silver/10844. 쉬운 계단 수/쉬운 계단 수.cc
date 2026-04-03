#include <stdio.h>
#include <stdlib.h>

#define MOD 1000000000

int main(void) {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	int** dp = (int**)malloc((n + 1) * sizeof(int*));
	if (dp == NULL) return -1;

	for (int i = 0; i <= n; i++) {
		dp[i] = (int*)calloc(10, sizeof(int));
		if (dp[i] == NULL) {
			for (int j = 0; j < i; j++) {
				free(dp[j]);
			}
			free(dp);
			return -1;
		}
	}

	for (int i = 1; i < 10; i++) dp[1][i] = 1;

	for (int i = 2; i <= n; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 0) dp[i][j] = dp[i - 1][1];
			else if (j == 9) dp[i][j] = dp[i - 1][8];
			else dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1];

			dp[i][j] %= MOD;
		}
	}

	long long sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += dp[n][i];
	}

	printf("%lld\n", sum % MOD);

	for (int i = 0; i <= n; i++) free(dp[i]);
	free(dp);
	return 0;
}