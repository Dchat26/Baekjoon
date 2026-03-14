import sys
input = sys.stdin.readline
write = sys.stdout.write

def solve():
    line = input().split()
    if not line: return
    n, m = map(int, line)
    
    nlist = set(input().rstrip() for _ in range(n))
    mlist = set(input().rstrip() for _ in range(m))
    
    result = sorted(list(nlist & mlist))
            
    write(str(len(result)) + "\n")
    write("\n".join(result) + "\n")
    
if __name__ == "__main__":
    solve()