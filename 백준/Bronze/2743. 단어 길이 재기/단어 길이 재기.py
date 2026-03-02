import sys
input = sys.stdin.readline

def solve():
    s = input().rstrip()
    if not s: return
    
    print(len(s))
    
if __name__ == "__main__":
    solve()