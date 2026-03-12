import sys
input = sys.stdin.readline

def solve():
    line = input().split()
    if not line: return
    n, m = map(int, line)
    
    bored = []
    for _ in range(n):
        boredline = list(input().rstrip())
        if not boredline or len(boredline) != m: return
        bored.append(boredline)
    
    count = []
    for i in range(n - 7):
        for j in range(m - 7):
            wdraw = 0
            bdraw = 0
            for a in range(i, i + 8):
                for b in range(j, j + 8):
                    if (a + b) % 2 == 0:
                        if bored[a][b] != 'W': wdraw += 1
                        if bored[a][b] != 'B': bdraw += 1
                    else:
                        if bored[a][b] != 'B': wdraw += 1
                        if bored[a][b] != 'W': bdraw += 1
            count.append(wdraw)
            count.append(bdraw)
            
    print(min(count))
    
if __name__ == "__main__":
    solve()