import sys
input = sys.stdin.readline

def solve():
    x4 = 0
    y4 = 0
    for _ in range(3):
        line = input().split()
        if not line: return 
        
        x, y = map(int, line)
        x4 ^= x
        y4 ^= y
        
    print(x4, y4)
    
if __name__ == "__main__":
    solve()