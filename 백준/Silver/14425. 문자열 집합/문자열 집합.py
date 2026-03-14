import sys
input = sys.stdin.readline
write = sys.stdout.write

def solve():
    line = input().split()
    if not line: return
    n, m = map(int, line)
    
    nlist = set(input().rstrip() for _ in range(n))
    
    count = 0
    for _ in range(m):
        target = input().rstrip()
        if not target: return
        
        if target in nlist:
            count += 1
    
    write(str(count) + "\n")
    
if __name__ == "__main__":
    solve()