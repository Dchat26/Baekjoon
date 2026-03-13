import sys
input = sys.stdin.readline
write = sys.stdout.write
        
def solve():
    n = int(input().rstrip())
    if not n: return
    
    nlist = []
    for _ in range(n):
        line = input().split()
        if not line: return
        nlist.append(list(map(int, line)))
    
    nlist.sort()
    
    for x, y in nlist:
        write(f"{x} {y}\n")
    
if __name__ == "__main__":
    solve()