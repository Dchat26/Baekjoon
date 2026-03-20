import sys

input = sys.stdin.readline
write = sys.stdout.write

def merge_sort(a: list[int], p: int, r: int, k: int, count_list: list[int], res_list: list[int]):
    if p < r:
        q = (p + r) // 2
        merge_sort(a, p, q, k, count_list, res_list)      
        merge_sort(a, q + 1, r, k, count_list, res_list)  
        merge(a, p, q, r, k, count_list, res_list)
       
def merge(a: list[int], p: int, q: int, r: int, k: int, count_list: list[int], res_list: list[int]):
    i, j = p, q + 1
    tmp = []
    while i <= q and j <= r:
        if a[i] <= a[j]:
            tmp.append(a[i])
            i += 1
        else:
            tmp.append(a[j])
            j += 1
            
    while i <= q: 
        tmp.append(a[i]) 
        i += 1
    while j <= r: 
        tmp.append(a[j]) 
        j += 1
    
    for t in range(len(tmp)):
        a[p + t] = tmp[t]
        count_list[0] += 1
        if count_list[0] == k:
            res_list[0] = a[p + t]
              
def solve():
    line = input().split()
    if not line: return
    n, k = map(int, line)
    
    alist = list(map(int, input().split()))
    
    count_list = [0]
    res_list = [-1]
    merge_sort(alist, 0, n - 1, k, count_list, res_list)
    
    write(str(res_list[0]) + "\n")
    
if __name__ == "__main__":
    solve()