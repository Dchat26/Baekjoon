#include <stdio.h>

#define MAX 10001

int main(void) {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	int wine[MAX] = { 0 };
	for (int i = 1; i <= n; i++) {
		if (scanf("%d", &wine[i]) != 1) break;
	}

	int dp[MAX] = { 0 };
	dp[1] = wine[1];

	if (n > 1) dp[2] = wine[1] + wine[2];

	for (int i = 3; i <= n; i++) {
		int max_val = dp[i - 1];
		if (max_val < dp[i - 2] + wine[i]) max_val = dp[i - 2] + wine[i];
		if (max_val < dp[i - 3] + wine[i - 1] + wine[i]) max_val = dp[i - 3] + wine[i - 1] + wine[i];

		dp[i] = max_val;
	}

	printf("%d\n", dp[n]);

	return 0;
}