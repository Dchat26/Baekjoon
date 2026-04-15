#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char key[20];
	char value[5];
} Dict;

int main(void) {
	Dict color[10] = {
		{"black", "0"},
		{"brown", "1"},
		{"red", "2"},
		{"orange", "3"},
		{"yellow", "4"},
		{"green", "5"},
		{"blue", "6"},
		{"violet", "7"},
		{"grey", "8"},
		{"white", "9"}
	};

	char target[20];
	char result[20];
	result[0] = '\0';

	int n = 3;
	while (n--) {
		if (scanf("%s", target) != 1) break;

		for (int i = 0; i < 10; i++) {
			if (strcmp(color[i].key, target) == 0) {
				if (n != 0) {
					strcat(result, color[i].value);
					break;
				}
				else {
					for (int j = 0; j < atoi(color[i].value); j++) {
						strcat(result, "0");
					}
				}
			}
		}
	}

	long long final_result = atoll(result);
	printf("%lld\n", final_result);

	return 0;
}
