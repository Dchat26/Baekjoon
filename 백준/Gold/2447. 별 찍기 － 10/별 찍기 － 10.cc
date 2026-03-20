#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char board[2200][2200];

void draw_stars(int x, int y, int n) {
	if (n == 1) {
		board[x][y] = '*';
		return;
	}

	int next_n = n / 3;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == 1 && j == 1) {
				continue;
			}

			draw_stars(x + (i * next_n), y + (j * next_n), next_n);
		}
	}
}

int main(void) {
	int n = 0;
	if (scanf("%d", &n) != 1) return 0;

	for (int i = 0; i < n; i++) {
		memset(board[i], ' ', n);
	}

	draw_stars(0, 0, n);

	char* final_buffer = (char*)malloc((n * (n + 1) + 1) * sizeof(char));
	if (final_buffer == NULL) return -1;
	char* ptr = final_buffer;
	final_buffer[0] = '\0';

	for (int i = 0; i < n; i++) {
		memcpy(ptr, board[i], n);
		ptr += n;
		*ptr++ = '\n';
	}
	*ptr = '\0';

	fputs(final_buffer, stdout);

	free(final_buffer);
	return 0;
}