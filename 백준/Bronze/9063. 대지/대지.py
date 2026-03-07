import sys
input = sys.stdin.readline

def solve():
    n = int(input().rstrip())
    if not n: return
    
    max_xval = -10001
    max_yval = -10001
    
    min_xval = 10001
    min_yval = 10001
    
    for _ in range(n):
        line = input().split()
        if not line: return
        
        x, y = map(int, line)
        
        if max_xval < x: max_xval = x
        if min_xval > x: min_xval = x
        if max_yval < y: max_yval = y
        if min_yval > y: min_yval = y
        
    result = (max_xval - min_xval) * (max_yval - min_yval)
    
    print(result)
    
if __name__ == "__main__":
    solve()