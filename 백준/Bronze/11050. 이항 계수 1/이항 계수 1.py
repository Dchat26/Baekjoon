import sys

input = sys.stdin.readline
write = sys.stdout.write

def fac(num: int):
    val = 1
    for i in range(1, num + 1):
        val *= i
        
    return val

def solve():
    line = input().split()
    if not line: return
    
    n, k = map(int, line)
    if not 1 <= n <= 10: return
    if not 0 <= k <= n: return
    
    nfac = fac(n)
    kfac = fac(k)
    nkfac = fac(n - k)
        
    result = nfac // (kfac * nkfac)
    
    write(str(result) + "\n")
    
if __name__ == "__main__":
    solve()