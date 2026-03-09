import sys
input = sys.stdin.readline

def solve():
    line = input().split()
    if not line: return
    n, m = map(int, line)
    
    nline = input().split()
    if not nline: return
    nlist = list(map(int, nline))
    
    result = 0
    for i in range(n - 2):
        for j in range(i + 1, n - 1):
            for k in range(j + 1, n):
                value = nlist[i] + nlist[j] + nlist[k]
                if value <= m:
                    result = max(result, value)
                    
    print(result)
    
if __name__ == "__main__":
    solve()
