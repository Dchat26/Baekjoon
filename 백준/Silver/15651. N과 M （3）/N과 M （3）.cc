#include <stdio.h>
#include <stdlib.h>

int ans[10];

void sq(int depth, int m, int n, char** ptr) {
	if (depth == m) {
		for (int i = 0; i < m; i++) {
			*ptr += sprintf(*ptr, (i == m - 1 ? "%d\n" : "%d "), ans[i]);
		}
		return;
	}

	for (int i = 1; i <= n; i++) {
			ans[depth] = i;

			sq(depth + 1, m, n, ptr);
		}
	}

int nmpow(int n, int m) {
	int res = 1;
	for (int i = 0; i < m; i++) res *= n;

	return res;
}

int main(void) {
	int n = 0, m = 0;
	if (scanf("%d %d", &n, &m) != 2) return 0;

	int sqcount = nmpow(n, m);

	char* output_buffer = (char*)malloc(sqcount * (m * 2 + 3) * sizeof(char));
	if (output_buffer == NULL) return -1;

	char* ptr = output_buffer;

	sq(0, m, n, &ptr);

	fputs(output_buffer, stdout);

	free(output_buffer);
	return 0;
}