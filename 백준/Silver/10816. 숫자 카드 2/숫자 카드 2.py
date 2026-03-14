import sys
input = sys.stdin.readline
write = sys.stdout.write

def solve():
    n = int(input().rstrip())
    if not n: return
    nlist = list(map(int, input().split()))
    
    m = int(input().rstrip())
    if not m: return
    mlist = list(map(int, input().split()))
    
    count = {}
    for i in nlist:
        if i in count:
            count[i] += 1
        else:
            count[i] = 1
            
    result = [str(count.get(i, 0)) for i in mlist]
    
    write(" ".join(result) + "\n")

if __name__ == "__main__":
    solve()