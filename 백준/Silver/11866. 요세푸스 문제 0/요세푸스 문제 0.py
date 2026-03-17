import sys
from collections import deque
input = sys.stdin.readline
write = sys.stdout.write

def solve():
    line = input().split()
    if not line: return
    n, k = map(int, line)
    
    Q = deque(range(1, n + 1))
    
    result = []
    while Q:
        Q.rotate(-(k - 1))
        result.append(str(Q.popleft()))
        
    write("<" + ", ".join(result) + ">")

if __name__ == "__main__":
    solve()