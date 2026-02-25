#include <stdio.h>

int main(void) {
	int year = 0;

	if (scanf("%d", &year) != 1) return -1;

	if ((year % 4 == 0) && (year % 100 != 0 || year % 400 == 0)) {
		printf("1\n");
	}
	else {
		printf("0\n");
	}

	return 0;
}