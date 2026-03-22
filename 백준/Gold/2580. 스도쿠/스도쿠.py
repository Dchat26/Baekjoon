import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve(cnt: int, zero: list[tuple], nlist: list[list[int]], row_check: list[list[bool]], col_check: list[list[bool]], box_check: list[list[bool]]):
    if cnt == len(zero):
        for i in nlist:
            print(*i)
        sys.exit(0)
    
    r, c = zero[cnt]
    box_idx = (r // 3) * 3 + (c // 3)
    
    for num in range(1, 10):
        if not row_check[r][num] and not col_check[c][num] and not box_check[box_idx][num]:
            row_check[r][num] = col_check[c][num] = box_check[box_idx][num] = True
            nlist[r][c] = num
            
            solve(cnt + 1, zero, nlist, row_check, col_check, box_check)
            
            nlist[r][c] = 0
            row_check[r][num] = col_check[c][num] = box_check[box_idx][num] = False
        
def main():
    nlist = []
    row_check = [[False] * 10 for _ in range(9)]
    col_check = [[False] * 10 for _ in range(9)]
    box_check = [[False] * 10 for _ in range(9)]
    zero = []
    
    for i in range(9):
        row = list(map(int, input().split()))
        nlist.append(row)
        for j in range(9):
            if row[j] != 0:
                num = row[j]
                row_check[i][num] = True
                col_check[j][num] = True
                box_check[((i // 3) * 3) + (j // 3)][num] = True
            else:
                zero.append((i, j))
                
    solve(0, zero, nlist, row_check, col_check, box_check)
                
if __name__ == "__main__":
    main()