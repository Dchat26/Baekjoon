import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
    line = input().split()
    if not line: return
    R, G, B = map(int, line)
    
    r = R / 255
    g = G / 255
    b = B / 255
    
    K = 1 - max(r, g, b)
    
    if K == 1:
        C, M, Y = 0, 0, 0
    else :
        C = (1 - r - K) / (1 - K)
        M = (1 - g - K) / (1 - K)
        Y = (1 - b - K) / (1 - K)
        
    print(C, M, Y, K)

if __name__ == "__main__":
    solve()