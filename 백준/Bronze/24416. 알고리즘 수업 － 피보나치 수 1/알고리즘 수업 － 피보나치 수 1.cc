#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	int* f = (int*)calloc((n + 1), sizeof(int));
	if (f == NULL) return -1;

	f[1] = f[2] = 1;

	for (int i = 3; i < n + 1; i++) {
		f[i] = f[i - 1] + f[i - 2];
	}

	printf("%d %d\n", f[n], n - 2);

	free(f);
	return 0;
}