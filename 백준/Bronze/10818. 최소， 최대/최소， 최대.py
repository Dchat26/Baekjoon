import sys
input = sys.stdin.readline

def MM(nlist: list[int]):
    print(min(nlist), max(nlist))

def solve():
    n = int(input().rstrip())
    if not n: return
    
    nlist = list(map(int, input().split()))
    
    MM(nlist)

if __name__ == "__main__":
    solve()