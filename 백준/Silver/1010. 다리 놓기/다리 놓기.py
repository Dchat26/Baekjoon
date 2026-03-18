import sys

input = sys.stdin.readline
write = sys.stdout.write

def fac(num: int):
    val = 1
    for i in range(1, num + 1):
        val *= i
        
    return val

def solve():
    n = int(input().rstrip())
    if not n: return
    
    result = []
    for _ in range(n):
        line = input().split()
        if not line: return
    
        n, k = map(int, line)
        if 0 > n: return
        if n > k or k > 30: return
    
        nfac = fac(n)
        kfac = fac(k)
        knfac = fac(k - n)
        
        result.append(str(kfac // (nfac * knfac)))
    
    write("\n".join(result) + "\n")
    
if __name__ == "__main__":
    solve()