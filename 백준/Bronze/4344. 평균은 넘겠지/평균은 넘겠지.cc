#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	while (n--) {
		int s = 0;
		if (scanf("%d", &s) != 1) break;

		int* temp = (int*)malloc(s * sizeof(int));
		if (temp == NULL) break;

		for (int i = 0; i < s; i++) {
			if (scanf("%d", &temp[i]) != 1) break;
		}

		int sum = 0;
		for (int i = 0; i < s; i++) sum += temp[i];

		double avg = (double)sum / s;

		int count = 0;
		for (int i = 0; i < s; i++) {
			if (avg < temp[i]) count++;
		}

		double rate = ((double)count / s) * 100;

		printf("%.3f%%\n", rate);

		free(temp);
	}

	return 0;
}