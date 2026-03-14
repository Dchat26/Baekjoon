import sys
input = sys.stdin.readline
write = sys.stdout.write

def solve():
    line = input().split()
    if not line: return
    n, m = map(int, line)
    
    nlist = set(input().split())
    mlist = set(input().split())
    
    write(str(len(nlist ^ mlist)) + "\n")
            
if __name__ == "__main__":
    solve()