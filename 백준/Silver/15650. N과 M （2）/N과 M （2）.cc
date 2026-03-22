#include <stdio.h>
#include <stdlib.h>

int ans[10];
int visited[10];

void sq(int depth, int start, int m, int n, char** ptr) {
	if (depth == m) {
		for (int i = 0; i < m; i++) {
			*ptr += sprintf(*ptr, (i == m - 1 ? "%d\n" : "%d "), ans[i]);
		}
		return;
	}

	for (int i = start; i <= n; i++) {
			ans[depth] = i;

			sq(depth + 1, i + 1, m, n, ptr);
		}
	}

int fac(int num) {
	if (num <= 1) return 1;

	return num * fac(num - 1);
}

int nmfac(int n, int m) {
	int nfac = fac(n);
	int mfac = fac(m);
	int sfac = fac(n - m);

	return nfac / (mfac * sfac);
}

int main(void) {
	int n = 0, m = 0;
	if (scanf("%d %d", &n, &m) != 2) return 0;

	int sqcount = nmfac(n, m);

	char* output_buffer = (char*)malloc(sqcount * (m * 2 + 3) * sizeof(char));
	if (output_buffer == NULL) return -1;

	char* ptr = output_buffer;

	sq(0, 1, m, n, &ptr);

	fputs(output_buffer, stdout);

	free(output_buffer);
	return 0;
}