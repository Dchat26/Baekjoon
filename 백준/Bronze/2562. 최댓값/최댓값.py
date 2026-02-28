import sys
input = sys.stdin.readline

def MaxIndex(nlist: list[int]):
    max_val = max(nlist)
    print(max_val, (nlist.index(max_val) + 1), sep="\n")
    
def solve():
    nlist = [int(input()) for _ in range(9)]
    
    MaxIndex(nlist)
if __name__ == "__main__":
    solve()

