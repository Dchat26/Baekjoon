import sys
from collections import Counter
input = sys.stdin.readline
write = sys.stdout.write

def solve():
    n = int(input().rstrip())
    if not n: return
    nlist = list(map(int, input().split()))
    
    count = Counter(nlist)
    
    m = int(input().rstrip())
    if not m: return
    mlist = list(map(int, input().split()))
    
    result = [str(count[i]) for i in mlist]
    
    write(" ".join(result) + "\n")

if __name__ == "__main__":
    solve()
