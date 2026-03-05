import sys
input = sys.stdin.readline

def solve():
    line = input().rstrip()
    if not line: return
    n = int(line)
    
    print((2 ** n + 1) ** 2)
    
if __name__ == "__main__":
    solve()
