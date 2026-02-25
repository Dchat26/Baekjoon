#include <stdio.h>

int Quadrant(int x, int y) {
	if (x > 0 && y > 0) {
		return 1;
	}
	else if (x < 0 && y > 0) {
		return 2;
	}
	else if (x < 0 && y < 0) {
		return 3;
	}
	else if (x > 0 && y < 0) {
		return 4;
	}

	return 0;
}

int main(void) {
	int x = 0, y = 0;

	if (scanf("%d %d", &x, &y) != 2) return -1;

	int result = Quadrant(x, y);

	printf("%d\n", result);

	return 0;
}