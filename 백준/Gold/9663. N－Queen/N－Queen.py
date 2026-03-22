import sys
input = sys.stdin.readline

def solve(row, n, col, diag1, diag2):
    global count
    
    if row == n:
        count += 1
        return
    
    for i in range(n):
        if not col[i] and not diag1[row + i] and not diag2[row - i + n]:
            col[i] = diag1[row + i] = diag2[row - i + n] = True
            
            solve(row + 1, n, col, diag1, diag2)
            
            col[i] = diag1[row + i] = diag2[row - i + n] = False
            
def main():
    n = int(input())
    global count
    count = 0
    
    col = [False] * n
    diag1 = [False] * (2 * n)
    diag2 = [False] * (2 * n)
    
    solve(0, n, col, diag1, diag2)
    
    print(count)
    
if __name__ == "__main__":
    main()