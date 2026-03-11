import sys
input = sys.stdin.readline

def solve():
    line = input().split()
    if not line: return
    a, b, c, d, e, f = map(int, line)
    
    for x in range(-999, 1000):
        for y in range(-999, 1000):
            if a * x + b * y == c and d * x + e * y == f:
                print(x, y)
                return
    
if __name__ == "__main__":
    solve()