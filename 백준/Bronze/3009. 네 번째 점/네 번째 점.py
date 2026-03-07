import sys
input = sys.stdin.readline

def solve():
    xlist = []
    ylist = []
    for _ in range(3):
        line = input().split()
        if not line: return
        
        x, y = map(int, line)
        xlist.append(x)
        ylist.append(y)
    
    x4 = 0
    y4 = 0
    for i in range(3):
        if xlist.count(xlist[i]) == 1:
            x4 = xlist[i]
        if ylist.count(ylist[i]) == 1:
            y4 = ylist[i]
            
    print(x4, y4)
            
if __name__ == "__main__":
    solve()