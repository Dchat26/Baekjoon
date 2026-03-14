import sys
input = sys.stdin.readline
write = sys.stdout.write

def solve():
    n = int(input().rstrip())
    if not n: return
    nlist = sorted(list(map(int, input().split())))
    
    m = int(input().rstrip())
    if not m: return
    mlist = list(map(int, input().split()))
    
    result = []
    for i in mlist:
        start, end = 0, n - 1
        found = False
        while start <= end:
            mid = (start + end) // 2
            if nlist[mid] == i:
                found = True
                break
            elif nlist[mid] < i:
                start = mid + 1
            else:
                end = mid - 1
                
        result.append("1" if found else "0")
        
    write(" ".join(result) + "\n")
    
if __name__ == "__main__":
    solve()
