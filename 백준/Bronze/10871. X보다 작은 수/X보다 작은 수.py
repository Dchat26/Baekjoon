import sys
input = sys.stdin.readline

def LessPrint(nlist: list[int], target: int):
    for i in nlist:
        if i < target:
            print(i, end=' ')

def solve():
    try:
        NX = input().split()
        if not NX: return
        N, X = map(int, NX)
        
        N_List = list(map(int, input().split()))
        
        LessPrint(N_List, X)
    except (ValueError, EOFError):
        pass

if __name__ == "__main__":
    solve()
