#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	char** temp = (char**)malloc(n * sizeof(char*));
	if (temp == NULL) return -1;

	for (int i = 0; i < n; i++) {
		char s[55];
		if (scanf("%s", s) != 1) break;

		temp[i] = (char*)malloc((strlen(s) + 1) * sizeof(char));
		if (temp[i] == NULL) {
			for (int j = 0; j < i; j++) free(temp[j]);
			free(temp);
			return -1;
		}

		strcpy(temp[i], s);
	}

	int len = strlen(temp[0]);
	char* answer = (char*)malloc((len + 1) * sizeof(char));
	if (answer == NULL) {
		for (int i = 0; i < n; i++) free(temp[i]);
		free(temp);
		return -1;
	}

	for (int i = 0; i < len; i++) {
		int is_TF = 1;
		char c = temp[0][i];
		for (int j = 1; j < n; j++) {
			if (c != temp[j][i]) {
				is_TF = 0;
				break;
			}
		}

		if (is_TF) answer[i] = temp[0][i];
		else answer[i] = '?';
	}
	answer[len] = '\0';
	
	printf("%s\n", answer);

	free(answer);
	for (int i = 0; i < n; i++) free(temp[i]);
	free(temp);
	return 0;
}