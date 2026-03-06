import sys
input = sys.stdin.readline

def solve():
    n = input().rstrip()
    if not n: return
    
    line = list(map(int, input().split()))
    if not line: return
    
    count = 0
    for i in line:
        if i < 2:
            continue
        
        isdecimal = True
        for j in range(2, i):
            if i % j == 0:
                isdecimal = False
                break
        
        if isdecimal:
            count += 1
    
    print(count)
            
if __name__ == "__main__":
    solve()