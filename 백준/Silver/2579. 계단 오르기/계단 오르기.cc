#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	int* stair = (int*)calloc(n + 1, sizeof(int));
	if (stair == NULL) return -1;

	for (int i = 1; i <= n; i++) {
		if (scanf("%d", &stair[i]) != 1) break;
	}

	if (n == 1) {
		printf("%d\n", stair[1]);
		return 0;
	}

	if (n == 2) {
		printf("%d\n", stair[1] + stair[2]);
		return 0;
	}

	int* dp = (int*)calloc(n + 1, sizeof(int));
	if (dp == NULL) {
		free(stair);
		return -1;
	}

	dp[1] = stair[1];
	dp[2] = stair[1] + stair[2];
	dp[3] = (stair[1] + stair[3] > stair[2] + stair[3]) ? stair[1] + stair[3] : stair[2] + stair[3];

	for (int i = 4; i <= n; i++) {
		dp[i] = stair[i] + ((dp[i - 3] + stair[i - 1] > dp[i - 2]) ? dp[i - 3] + stair[i - 1] : dp[i - 2]);
	}

	printf("%d\n", dp[n]);

	free(dp);
	free(stair);
	return 0;
}