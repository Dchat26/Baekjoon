import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve(idx, res, nlist, n, add, sub, mul, div, min_val, max_val):
    if idx == n:
        max_val[0] = max(max_val[0], res)
        min_val[0] = min(min_val[0], res)
        return
    
    if add > 0:
        solve(idx + 1, res + nlist[idx], nlist, n, add - 1, sub, mul, div, min_val, max_val)
    
    if sub > 0:
        solve(idx + 1, res - nlist[idx], nlist, n, add, sub -1, mul, div, min_val, max_val)
    
    if mul > 0:
        solve(idx + 1, res * nlist[idx], nlist, n, add, sub, mul - 1, div, min_val, max_val)
        
    if div > 0:
        if res < 0:
            next_res = -(-res // nlist[idx])
        else:
            next_res = res // nlist[idx]
        solve(idx + 1, next_res, nlist, n, add, sub, mul, div - 1, min_val, max_val)

def main():
    n = int(input())
    if not n: return
    
    num = list(map(int, input().split()))
    add, sub, mul, div = map(int, input().split())
    
    max_val = [-1000000001]
    min_val = [1000000001]
    
    solve(1, num[0], num, n, add, sub, mul, div, min_val, max_val)
    
    print(int(max_val[0]), int(min_val[0]), sep='\n')
    
if __name__ == "__main__":
    main()