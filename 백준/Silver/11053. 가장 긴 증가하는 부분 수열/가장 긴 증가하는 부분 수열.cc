#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	int* nlist = (int*)malloc(n * sizeof(int));
	int* dp = (int*)malloc(n * sizeof(int));
	if (nlist == NULL || dp == NULL) return -1;

	for (int i = 0; i < n; i++) {
		if (scanf("%d", &nlist[i]) != 1) {
			free(dp);
			free(nlist);
			return -1;
		}

		dp[i] = 1;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (nlist[i] > nlist[j]) {
				dp[i] = (dp[i] > dp[j] + 1) ? dp[i] : dp[j] + 1;
			}
		}
	}

	int max_val = dp[0];
	for (int i = 0; i < n; i++) {
		max_val = (max_val > dp[i]) ? max_val : dp[i];
	}

	printf("%d\n", max_val);

	free(dp);
	free(nlist);
	return 0;
}