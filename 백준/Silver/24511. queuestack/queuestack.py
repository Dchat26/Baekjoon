import sys
from collections import deque

input = sys.stdin.readline
write = sys.stdout.write

def solve():
    n = int(input().rstrip())
    if not n: return
    queuestack = list(map(int, input().split()))
    nlist = list(map(int, input().split()))
    
    m = int(input().rstrip())
    if not m: return
    mlist = list(map(int, input().split()))
    
    k = deque([nlist[i] for i in range(n) if queuestack[i] == 0])
    
    result = []
    for i in mlist:
        k.appendleft(i)
        result.append(str(k.pop()))
    
    write(" ".join(result) + "\n")
        
if __name__ == "__main__":
    solve()