import sys
input = sys.stdin.readline

def solve():
    n = int(input().rstrip())
    if not n: return
    
    print(n * 4)
    
if __name__ == "__main__":
    solve()