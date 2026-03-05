import sys
input = sys.stdin.readline

def solve():
    line = input().split()
    if not line: return
    
    a, b, v = map(int, line)
    
    print((v - b - 1) // (a - b) + 1)
    
if __name__ == "__main__":
    solve()
