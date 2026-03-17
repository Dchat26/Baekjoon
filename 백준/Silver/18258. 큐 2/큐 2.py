import sys
from collections import deque
input = sys.stdin.readline
write = sys.stdout.write


class Queue:
    def __init__(self):
        self.queue = deque()
    
    def push(self, x):
        self.queue.append(x)

    def pop(self):
        if self.queue:
            write(str(self.queue.popleft()) + "\n")
        else:
            write("-1\n")
    
    def size(self):
        write(str(len(self.queue)) + "\n")
    
    def empty(self):
        if self.queue:
            write("0\n")
        else:
            write("1\n")
            
    def front(self):
        if self.queue:
            write(str(self.queue[0]) + "\n")
        else:
            write("-1\n")
    
    def back(self):
        if self.queue:
            write(str(self.queue[-1]) + "\n")
        else:
            write("-1\n")

def solve():
    n = int(input().rstrip())
    if not n: return
    
    Q = Queue()
    for _ in range(n):
        s = input().split()
        s0 = s[0]
        if s0 == "push":
            Q.push(s[1])
        elif s0 == "pop":
            Q.pop()
        elif s0 == "size":
            Q.size()
        elif s0 == "empty":
            Q.empty()
        elif s0 == "front":
            Q.front()
        elif s0 == "back":
            Q.back()

if __name__ == "__main__":
    solve()