import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
    n = int(input().rstrip())
    if not n: return
    
    m = {"ChongChong"}
    
    for _ in range(n):
        line = input().split()
        if not line: return
        a, b = line
        
        if a in m or b in m:
            m.add(a)
            m.add(b)
            
    write(str(len(m)) + "\n")
    
if __name__ == "__main__":
    solve()