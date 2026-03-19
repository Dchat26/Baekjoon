import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
    n = int(input().rstrip())
    if not n: return
    
    nlist = list(map(int, input().split()))
    nlist.sort()
    
    result = nlist[0] * nlist[-1]
    
    write(str(result) + "\n")
    
if __name__ == "__main__":
    solve()