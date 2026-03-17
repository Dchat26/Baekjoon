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
        self.queue.pop()
    
    def size(self):
        write(str(len(self.queue)) + "\n")
    
    def empty(self):
        if self.queue:
            write("0\n")
        else:
            write("1\n")
    
    def back(self):
        if self.queue:
            write(str(self.queue[-1]) + "\n")
        else:
            write("-1\n")

def solve():
    n = int(input().rstrip())
    if not n: return
    if not 1 <= n <= 100000: return
    
    Q = Queue()
    for _ in range(n):
        s = int(input().rstrip())
        if s == 0:
            Q.pop()
        else:
            Q.push(s)
    
    write(str(sum(Q.queue)) + "\n")
    
    """for _ in range(n):
        s = input().split()
        s0 = s[0]
        if s0 == '1':
            Q.push(s[1])
        elif s0 == '2':
            Q.pop()
        elif s0 == '3':
            Q.size()
        elif s0 == '4':
            Q.empty()
        elif s0 == '5':
            Q.back()"""
    
if __name__ == "__main__":
    solve()