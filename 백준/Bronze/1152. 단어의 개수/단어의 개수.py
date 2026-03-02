import sys
input = sys.stdin.readline

def solve():
    s = input().split()
    if not s: print(0)
    else: print(len(s))
    
if __name__ == "__main__":
    solve()
    