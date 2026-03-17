import sys
from collections import deque
input = sys.stdin.readline
write = sys.stdout.write

def solve():
    n = int(input().rstrip())
    if not n: return
    
    Q = deque(range(1, n + 1))
    
    while (len(Q) != 1):
        Q.popleft()
        Q.append(Q.popleft())
    
    if Q and len(Q) == 1:
        write(str(Q[0]) + "\n")

if __name__ == "__main__":
    solve()