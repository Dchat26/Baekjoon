import sys
input = sys.stdin.readline
write = sys.stdout.write

def solve():
    n = int(input().rstrip())
    if not n: return
    if not 1 <= n or not n <= 1000000: return
    
    line = input().split()
    if not line: return
    nlist = list(map(int, line))
        
    sortn = sorted(list(set(nlist)))
    ndic = {value: index for index, value in enumerate(sortn)}
    
    result = [str(ndic[i]) for i in nlist]
    write(" ".join(result) + "\n")

if __name__ == "__main__":
    solve()