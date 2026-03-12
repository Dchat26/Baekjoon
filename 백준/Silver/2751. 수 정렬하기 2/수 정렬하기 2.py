import sys
input = sys.stdin.readline
write = sys.stdout.write
        
def solve():
    n = int(input().rstrip())
    if not n: return
    
    nlist = [int(input().rstrip()) for _ in range(n)]
        
    nlist.sort()
    
    write("\n".join(map(str, nlist)) + "\n")
    
if __name__ == "__main__":
    solve()