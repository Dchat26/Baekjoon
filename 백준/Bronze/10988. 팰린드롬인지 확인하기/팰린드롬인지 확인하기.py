import sys
input = sys.stdin.readline
    
def solve():
    s = input().rstrip()
    if not s: return
    
    if s == "".join(reversed(s)): print(1)
    else: print(0)
    
if __name__ == "__main__":
    solve()
