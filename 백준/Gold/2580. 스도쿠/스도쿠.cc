#include <stdio.h>
#include <stdlib.h>

int board[9][9];
int row_check[9][10];
int col_check[9][10]; 
int box_check[9][10];

typedef struct {
    int r, c;
} Point;

Point zero[81];
int zero_cnt = 0;

int solve(int cnt) {
    if (cnt == zero_cnt) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                printf("%d ", board[i][j]);
            }
            printf("\n");
        }
        return 1;
    }

    int r = zero[cnt].r;
    int c = zero[cnt].c;
    int box_idx = (r / 3) * 3 + (c / 3);

    for (int num = 1; num <= 9; num++) {
        if (!row_check[r][num] && !col_check[c][num] && !box_check[box_idx][num]) {
            row_check[r][num] = col_check[c][num] = box_check[box_idx][num] = 1;
            board[r][c] = num;

            if (solve(cnt + 1)) return 1;

            board[r][c] = 0;
            row_check[r][num] = col_check[c][num] = box_check[box_idx][num] = 0;
        }
    }
    return 0;
}

int main(void) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (scanf("%d", &board[i][j]) != 1) return 0;

            if (board[i][j] != 0) {
                int num = board[i][j];
                row_check[i][num] = 1;
                col_check[j][num] = 1;
                box_check[(i / 3) * 3 + (j / 3)][num] = 1;
            }
            else {
                zero[zero_cnt].r = i;
                zero[zero_cnt].c = j;
                zero_cnt++;
            }
        }
    }

    solve(0);

    return 0;
}