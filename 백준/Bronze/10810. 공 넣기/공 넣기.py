import sys
input = sys.stdin.readline

def Basket(nlist: list[int], m: int):
    for _ in range(m):
        line = input().split()
        if not line: return
        
        i, j, k = map(int, line)
        
        for change in range(i - 1, j):
            nlist[change] = k
    
    print(*nlist)

def solve():
    line = input().split()
    if not line: return
    
    n, m = map(int, line)
    nlist = [0] * n
    
    Basket(nlist, m)

if __name__ == "__main__":
    solve()
