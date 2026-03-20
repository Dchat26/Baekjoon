#include <stdio.h>
#include <stdlib.h>

void merge(int* nlist, int p, int q, int r, int k, int* count, int* res, int* temp) {
	int i = p;
	int j = q + 1;
	int t = 0;

	while (i <= q && j <= r) {
		if (nlist[i] <= nlist[j]) temp[t++] = nlist[i++];
		else temp[t++] = nlist[j++];
	}

	while (i <= q) temp[t++] = nlist[i++];
	while (j <= r) temp[t++] = nlist[j++];

	for (int i = p, t = 0; i <= r; i++, t++) {
		nlist[i] = temp[t];
		(*count)++;
		if (*count == k) *res = nlist[i];
	}
}

void merge_sort(int* nlist, int p, int r, int k, int* count, int* res, int* temp) {
	if (p < r) {
		int q = (p + r) / 2;
		merge_sort(nlist, p, q, k, count, res, temp);
		merge_sort(nlist, q + 1, r, k, count, res, temp);
		merge(nlist, p, q, r, k, count, res, temp);
	}
}

int main(void) {
	int n = 0, k = 0;
	if (scanf("%d %d", &n, &k) != 2) return 0;

	int* nlist = (int*)malloc(n * sizeof(int));
	if (nlist == NULL) return -1;

	for (int i = 0; i < n; i++) {
		if (scanf("%d", &nlist[i]) != 1) break;
	}

	int* temp = (int*)malloc(n * sizeof(int));
	if (temp == NULL) {
		free(nlist);
		return -1;
	}

	int count = 0;
	int res = -1;
	merge_sort(nlist, 0, n - 1, k, &count, &res, temp);

	printf("%d\n", res);

	free(temp);
	free(nlist);
	return 0;
}