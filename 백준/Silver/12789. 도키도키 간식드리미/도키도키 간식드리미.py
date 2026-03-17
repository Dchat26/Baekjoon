import sys
from collections import deque
input = sys.stdin.readline
write = sys.stdout.write

def solve():
    n = int(input().rstrip())
    if not n: return
    
    line = input().split()
    if not line: return
    
    Q1 = deque(map(int, line))
    Q2 = deque()
    
    i = 1
    while Q1:
        if Q1 and Q1[0] == i:
            Q1.popleft()
            i += 1
        elif Q2 and Q2[-1] == i:
            Q2.pop()
            i += 1
        else:
            Q2.append(Q1.popleft())
    
    while Q2 and Q2[-1] == i:
        Q2.pop()
        i += 1
    
    if i == n + 1:
        write("Nice\n")
    else:
        write("Sad\n")

if __name__ == "__main__":
    solve()