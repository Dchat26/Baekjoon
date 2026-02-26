#include <stdio.h>

void GuGu(int num) {
	for (int i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", num, i, num * i);
	}
}

int main(void) {
	int num = 0;

	if (scanf("%d", &num) != 1) return -1;

	GuGu(num);

	return 0;
}