#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	char* answer = (char*)malloc((n + 1) * sizeof(char));
	if (answer == NULL) return -1;
	if (scanf("%s", answer) != 1) return 0;

	for (int i = 0; i < n; i++) {
		if (answer[i] >= 65 && answer[i] <= 97) {
			answer[i] = answer[i] + ('a' - 'A');
		}
		else {
			answer[i] = answer[i] - ('a' - 'A');
		}
	}

	printf("%s\n", answer);

	free(answer);
	return 0;
}