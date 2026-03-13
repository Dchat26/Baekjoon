import sys
input = sys.stdin.readline
write = sys.stdout.write
        
def solve():
    n = int(input().rstrip())
    if not n: return
    if not 1 <= n or not n <= 100000: return
    
    nlist = []
    for _ in range(n):
        line = input().split()
        if not line: return
        
        a, b = line
        a = int(a)
        if not 1 <= a or not a <= 200: return
        
        nlist.append((a, b))
        
    nlist.sort(key=lambda x: x[0])
    
    result = [f"{age} {name}" for age, name in nlist]
    
    write("\n".join(result) + "\n")
    
if __name__ == "__main__":
    solve()