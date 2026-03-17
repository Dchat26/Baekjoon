import sys
from collections import deque
input = sys.stdin.readline
write = sys.stdout.write

def solve():
    n = int(input().rstrip())
    if not n: return
    
    nlist = list(map(int, input().split()))
    Q = deque(range(2, n + 1))
    
    mlist = {}
    for i in range(1, n + 1):
        mlist[i] = nlist[i - 1]
    
    a = mlist[1]
    result = ['1']
    while Q:
        if a > 0:
            s = -(a - 1)
        else:
            s = -a
        
        Q.rotate(s)
        
        l = Q.popleft()
        a = mlist[l]
        
        result.append(str(l))
    
    write(" ".join(result) + "\n")
    
if __name__ == "__main__":
    solve()