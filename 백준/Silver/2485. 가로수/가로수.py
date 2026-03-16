import sys
input = sys.stdin.readline
write = sys.stdout.write

def gcd(a: int, b: int):
    while b:
        a, b = b, a % b
    
    return a

def solve():
    n = int(input().rstrip())
    if not n: return
    
    line1 = int(input().rstrip())
    if not line1: return
    
    
    temp = line1
    start = line1
    end = 0
    tree_len = []
    for _ in range(n - 1):
        line = int(input().rstrip())
        if not line: return
        
        tree_len.append(line - temp)
        temp = line
        
        if _ == n - 2:
            end = line
        
    g = tree_len[0]
    for i in range(1, n - 1):
        g = gcd(g, tree_len[i])
    
    total = end - start
    result = (total // g) + 1 - n
    
    write(str(result) + "\n")
        
if __name__ == "__main__":
    solve()
    
    
    
"""
import sys
input = sys.stdin.readline
write = sys.stdout.write

def gcd(a: int, b: int):
    while b:
        a, b = b, a % b
    
    return a

def solve():
    n = int(input().rstrip())
    if not n: return
    
    start = int(input().rstrip())
    if not start: return
    
    prev = start
    g = 0
    
    for i in range(n - 1):
        curr = int(input().rstrip()) 
        if not curr: return
        
        interval = curr - prev
        
        if i == 0:
            g = interval
        else:
            g = gcd(g, interval) 
        
        prev = curr
    
    end = prev 
    
    result = ((end - start) // g) + 1 - n
    write(str(result) + "\n")"""