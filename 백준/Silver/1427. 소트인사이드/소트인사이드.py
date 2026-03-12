import sys
input = sys.stdin.readline
write = sys.stdout.write

def insert_sort(nlist: list[int]):
    for i in range(1, len(nlist)):
        key = nlist[i]
        j = i - 1
        while j >= 0 and nlist[j] < key:
            nlist[j + 1] = nlist[j]
            j -= 1
        nlist[j + 1] = key
        
    print(*nlist, sep="")
        
def solve():
    line = input().rstrip()
    if not line: return
    nlist = list(map(int, line))
    
    insert_sort(nlist)
    
if __name__ == "__main__":
    solve()