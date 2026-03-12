import sys
input = sys.stdin.readline
    
def insert_sort(nlist: list[int]):
    for i in range(1, 5):
        key = nlist[i]
        j = i - 1
        while j >= 0 and nlist[j] > key:
            nlist[j+1] = nlist[j]
            j -= 1
            
        nlist[j+1] = key
            
    print(sum(nlist) // 5, nlist[2], sep="\n")
        
def solve():
    
    nlist = [int(input().rstrip()) for _ in range(5)]
        
    insert_sort(nlist)
    
if __name__ == "__main__":
    solve()