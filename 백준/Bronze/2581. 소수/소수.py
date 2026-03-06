import sys
input = sys.stdin.read

def solve():
    data = input().split()
    if not data: return
    m, n = map(int, data)
    
    dsum = 0
    dmin = 10001
    for i in range(m, n + 1):
        if i < 2: continue
        
        isdecimal = True
        for j in range(2, i):
            if i % j == 0:
                isdecimal = False
                break
        
        if isdecimal: 
            dsum += i
            if dmin > i:
                dmin = i
                
    if dsum == 0:
        print(-1)
    else:
        print(dsum, dmin, sep="\n")
            
if __name__ == "__main__":
    solve()