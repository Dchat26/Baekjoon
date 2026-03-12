import sys
input = sys.stdin.readline
    
def insert_sort(nlist: list[int], n: int):
    for i in range(1, n):
        key = nlist[i]
        j = i - 1
        while j >= 0 and nlist[j] > key:
            nlist[j+1] = nlist[j]
            j -= 1
            
        nlist[j+1] = key
            
    print(*nlist, sep="\n")
        
def solve():
    n = int(input().rstrip())
    if not n: return
    
    nlist = []
    for _ in range(n):
        nlist.append(int(input().rstrip()))
        
    insert_sort(nlist, n)
    
if __name__ == "__main__":
    solve()