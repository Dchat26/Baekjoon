import sys
input = sys.stdin.readline

def solve():
    n = int(input().rstrip())
    if not n: return
    
    line = 1
    while n > line:
        n -= line
        line += 1
    
    if line % 2 == 0:
        a = n
        b = line - n + 1
    else:
        a = line - n + 1
        b = n
    
    print(f"{a}/{b}")
    
if __name__ == "__main__":
    solve()