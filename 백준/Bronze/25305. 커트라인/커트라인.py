import sys
input = sys.stdin.readline
    
def insert_sort(nlist: list[int], n: int, k: int):
    for i in range(1, n):
        key = nlist[i]
        j = i - 1
        while j >= 0 and nlist[j] > key:
            nlist[j+1] = nlist[j]
            j -= 1
        nlist[j+1] = key
    
    if 1 <= k <= n:
        print(nlist[-k])
        
def solve():
    line = input().split()
    if not line: return
    n, k = map(int, line)
    
    nline = input().split()
    if not nline: return
    nlist = list(map(int, nline))
        
    insert_sort(nlist, n, k)
    
if __name__ == "__main__":
    solve()