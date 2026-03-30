#include <stdio.h>

int main(void) {
	long long wave[101] = { 0 };
	wave[1] = 1;
	wave[2] = 1;
	wave[3] = 1;

	for (int i = 4; i <= 100; i++) {
		wave[i] = wave[i - 2] + wave[i - 3];
	}

	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	int t = 0;
	while (n--) {
		if (scanf("%d", &t) != 1) break;
		printf("%lld\n", wave[t]);
	}

	return 0;
}