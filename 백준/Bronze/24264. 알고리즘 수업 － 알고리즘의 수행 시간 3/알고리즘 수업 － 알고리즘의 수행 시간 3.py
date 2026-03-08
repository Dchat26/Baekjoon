import sys
input = sys.stdin.readline

def solve():
    n = int(input().rstrip())
    if not n: return
    
    print(n * n, 2, sep="\n")
    
if __name__ == "__main__":
    solve()