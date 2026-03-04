import sys
input = sys.stdin.readline

def solve():
    data = []
    for _ in range(5):
        line = input().rstrip()
        if not line: return
        
        data.append(list(line))
    
    for i in range(15):
        for j in range(5):
            if i < len(data[j]):
                print(data[j][i], end="")
        
if __name__ == "__main__":
    solve()
