import sys
from collections import Counter

input = sys.stdin.readline
write = sys.stdout.write

def solve():
    line = input().split()
    if not line: return
    n, m = map(int, line)
    
    nlist = []
    for _ in range(n):
        s = input().rstrip()
        if not s: return
        
        if len(s) >= m:
            nlist.append(s)
    
    count = Counter(nlist)
    slist = list(count.keys())
    
    slist.sort(key=lambda x: (-count[x], -len(x), x))
    
    write("\n".join(slist) + "\n")
    
if __name__ == "__main__":
    solve()