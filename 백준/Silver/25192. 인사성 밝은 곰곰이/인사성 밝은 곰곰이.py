import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
    n = int(input().rstrip())
    if not n: return 
    
    m = set()
    count = 0
    for _ in range(n):
        s = input().rstrip()
        if not s: return
        
        if s == "ENTER":
            m = set()
        elif s not in m:
            m.add(s)
            count += 1
    
    write(str(count) + "\n")
    
if __name__ == "__main__":
    solve()