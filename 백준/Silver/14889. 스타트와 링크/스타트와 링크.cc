#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n;
int s[20][20];
int visited[20];
int min_diff = 1000000000;

void calculate() {
	int start_score = 0;
	int link_score = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (visited[i] && visited[j]) {
				start_score += s[i][j];
			}
			else if (!visited[i] && !visited[j]) {
				link_score += s[i][j];
			}
		}
	}

	int diff = abs(start_score - link_score);
	if (diff < min_diff) min_diff = diff;
}

void dfs(int idx, int count) {
	if (count == n / 2) {
		calculate();
		return;
	}

	for (int i = idx; i < n; i++) {
		if (!visited[i]) {
			visited[i] = 1;

			dfs(i + 1, count + 1);

			visited[i] = 0;
		}
	}
}

int main(void) {
	if (scanf("%d", &n) != 1) return 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (scanf("%d", &s[i][j]) != 1) break;
		}
	}

	visited[0] = 1;
	dfs(1, 1);

	printf("%d\n", min_diff);

	return 0;
}