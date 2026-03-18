import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
    line = input().split()
    if not line: return
    
    n, k = map(int, line)
    if not 1 <= n <= 10: return
    if not 0 <= k <= n: return
    
    nfac = 1
    for i in range(1, n + 1):
        nfac *= i
    
    kfac = 1
    for i in range(1, k + 1):
        kfac *= i
        
    nkfac = 1
    for i in range(1, n - k + 1):
        nkfac *= i
        
    result = nfac // (kfac * nkfac)
    
    write(str(result) + "\n")
    
if __name__ == "__main__":
    solve()