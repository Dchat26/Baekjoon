import sys
input = sys.stdin.readline

def solve():
    pcount = int(input().rstrip())
    if not pcount: return
    
    paper = [[0] * 100 for _ in range(100)]
    for _ in range(pcount):
        line = input().split()
        if not line: return
        x, y = map(int, line)
        
        for i in range(x, x + 10):
            for j in range(y, y + 10):
                paper[i][j] = 1
    
    total = 0
    for i in paper:
        total += sum(i)
        
    print(total)       
        
if __name__ == "__main__":
    solve()