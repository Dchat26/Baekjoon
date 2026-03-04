import sys
input = sys.stdin.readline

def max_row(data: list[int]):
    max_val = -1
    rowab = 1, 1
    for i in range(9):
        for j in range(9):
            if data[i][j] > max_val:
                max_val = data[i][j]
                rowab = i + 1, j + 1
    
    print(max_val)
    print(*rowab)
                
def solve():
    data = []
    for _ in range(9):
        line = input().split()
        if not line: return
        
        datalist = list(map(int, line))
        data.append(datalist)
    
    max_row(data)
    
if __name__ == "__main__":
    solve()