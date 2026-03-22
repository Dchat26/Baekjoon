import sys

input = sys.stdin.readline
write = sys.stdout.write

def Queen(row: int, n: int, col: list[bool], diag1: list[bool], diag2: list[bool], count_list: list[int]):
    global count
    
    if row == n:
        count_list[0] += 1
        return
    
    for i in range(n):
        if not col[i] and not diag1[row + i] and not diag2[row - i + n]:
            col[i] = diag1[row + i] = diag2[row - i + n] = True
            
            Queen(row + 1, n, col, diag1, diag2, count_list)
            
            col[i] = diag1[row + i] = diag2[row - i + n] = False
            
def solve():
    n = int(input().rstrip())
    if not n: return
    
    count_list = [0]
    col = [False] * n
    diag1 = [False] * (2 * n)
    diag2 = [False] * (2 * n)
    
    Queen(0, n, col, diag1, diag2, count_list)
    
    write(str(count_list[0]) + "\n")
    
if __name__ == "__main__":
    solve()