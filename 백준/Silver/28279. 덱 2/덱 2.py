import sys
from collections import deque
input = sys.stdin.readline
write = sys.stdout.write

class Deque:
    def __init__(self):
        self.dq = deque()
        
    def pushleft(self, x):
        self.dq.appendleft(x)
        
    def push(self, x):
        self.dq.append(x)
        
    def popleft(self):
        if self.dq:
            write(str(self.dq.popleft()) + "\n")
        else:
            write("-1\n")
            
    def pop(self):
        if self.dq:
            write(str(self.dq.pop()) + "\n")
        else:
            write("-1\n")
            
    def size(self):
        write(str(len(self.dq)) + "\n")
    
    def empty(self):
        if self.dq:
            write("0\n")
        else:
            write("1\n")
            
    def front(self):
        if self.dq:
            write(str(self.dq[0]) + "\n")
        else:
            write("-1\n")
            
    def back(self):
        if self.dq:
            write(str(self.dq[-1]) + "\n")
        else:
            write("-1\n")
    
def solve():
    n = int(input().rstrip())
    if not n: return
    
    DQ = Deque()
    for _ in range(n):
        line = input().split()
        if not line: return
        
        s = line[0]
        if s == '1': DQ.pushleft(line[1])
        elif s == '2': DQ.push(line[1])
        elif s == '3': DQ.popleft()
        elif s == '4': DQ.pop()
        elif s == '5': DQ.size()
        elif s == '6': DQ.empty()
        elif s == '7': DQ.front()
        elif s == '8': DQ.back()
            
if __name__ == "__main__":
    solve()