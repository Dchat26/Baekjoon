import sys
input = sys.stdin.readline

def solve():
    s = input().split()
    if not s: return
    
    a, b = "".join(reversed(s[0])), "".join(reversed(s[1])) 
    
    print(max(int(a), int(b)))
    
if __name__ == "__main__":
    solve()
