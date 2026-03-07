import sys
input = sys.stdin.readline

def solve():
    line = input().split()
    if not line: return
    x, y, w, h = map(int, line)
    
    result = min(x, y, w - x, h - y)
    
    print(result)    
            
if __name__ == "__main__":
    solve()