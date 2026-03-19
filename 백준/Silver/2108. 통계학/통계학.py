import sys
from collections import Counter

input = sys.stdin.readline
write = sys.stdout.write

def solve():
    n = int(input().rstrip())
    if not n: return
    
    nlist = [int(input().rstrip()) for _ in range(n)]
    nlist.sort()
    
    count = Counter(nlist).most_common()
    
    a = int(round(sum(nlist) / n))
    b = nlist[n // 2]
    
    if len(count) > 1 and count[0][1] == count[1][1]:
        c = count[1][0]
    else:
        c = count[0][0]
        
    d = nlist[-1] - nlist[0]
    
    print(a, b, c, d, sep="\n")
    
if __name__ == "__main__":
    solve()