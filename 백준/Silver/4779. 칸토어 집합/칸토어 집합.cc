#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define BUFFER_SIZE 20000000

void canto(char* arr, int length) {
	if (length == 1) return;

	int next_len = (int)(length / 3);

	for (int i = next_len; i < next_len * 2; i++) {
		arr[i] = ' ';
	}

	canto(arr, next_len);
	canto(arr + (next_len * 2), next_len);
}

int main(void) {
	char* final_output = (char*)malloc(BUFFER_SIZE * sizeof(char));
	if (final_output == NULL) return -1;
	char* ptr = final_output;
	final_output[0] = '\0';

	int n = 0;
	while (scanf("%d", &n) != EOF) {
		if (0 > n || n > 12) break;

		int total_len = (int)pow(3, n);

		char* arr = (char*)malloc((total_len + 1) * sizeof(char));
		if (arr == NULL) break;

		memset(arr, '-', total_len);
		arr[total_len] = '\0';

		canto(arr, total_len);

		int written = sprintf(ptr, "%s\n", arr);
		ptr += written;

		free(arr);
	}
	
	fputs(final_output, stdout);

	free(final_output);
	return 0;
}