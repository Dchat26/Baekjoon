#include <stdio.h>

void Time(int h, int m, int* resH, int* resM) {
	int total_time = h * 60 + m - 45;

	if (total_time < 0) {
		total_time += 1440;
	}

	*resH = total_time / 60;
	*resM = total_time % 60;
}

int main(void) {
	int h = 0, m = 0;
	int resH = 0, resM = 0;

	if (scanf("%d %d", &h, &m) != 2) return -1;

	Time(h, m, &resH, &resM);

	printf("%d %d", resH, resM);

	return 0;
}