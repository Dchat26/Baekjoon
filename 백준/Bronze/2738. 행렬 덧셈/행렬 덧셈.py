import sys
input = sys.stdin.readline

def add_ab(alist: list[int], blist: list[int]):
    for row_a, row_b in zip(alist, blist, strict=True):
        for a, b in zip(row_a, row_b, strict=True):
            print(a + b, end=" ")
        print()

def solve():
    line = input().split()
    if not line: return
    n, m = map(int, line)
    
    alist = []
    for _ in range(n):
        line = input().split()
        if not line: return
        alist.append(list(map(int, line)))
        
    blist = []    
    for _ in range(n):
        line = input().split()
        if not line: return
        blist.append(list(map(int, line)))
        
    add_ab(alist, blist)
    
if __name__ == "__main__":
    solve()
