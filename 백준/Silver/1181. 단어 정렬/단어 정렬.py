import sys
input = sys.stdin.readline
write = sys.stdout.write
        
def solve():
    n = int(input().rstrip())
    if not n: return
    
    nlist = []
    for _ in range(n):
        line = input().rstrip()
        if not line: return
        if len(line) > 50: return
        nlist.append(line)
    
    nlist = list(set(nlist))
    nlist.sort(key=lambda x: (len(x), x))
    
    write("\n".join(nlist) + "\n")
    
if __name__ == "__main__":
    solve()