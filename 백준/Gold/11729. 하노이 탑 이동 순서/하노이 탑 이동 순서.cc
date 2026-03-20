#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void hanoi(int n, int start, int end, int sub, char** ptr) {
	if (n == 1) {
		*ptr += sprintf(*ptr, "%d %d\n", start, end);
		return;
	}

	hanoi(n - 1, start, sub, end, ptr);
	*ptr += sprintf(*ptr, "%d %d\n", start, end);
	hanoi(n - 1, sub, end, start, ptr);
}

int main(void) {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	int ncount = (int)pow(2, n) - 1;
	char* output_buffer = (char*)malloc((ncount * 10 + 20) * sizeof(char));
	if (output_buffer == NULL) return -1;

	char* ptr = output_buffer;

	ptr += sprintf(ptr, "%d\n", ncount);

	hanoi(n, 1, 3, 2, &ptr);

	fputs(output_buffer, stdout);

	free(output_buffer);
	return 0;
}