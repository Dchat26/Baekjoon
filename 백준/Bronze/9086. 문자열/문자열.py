import sys
input = sys.stdin.readline

def solve():
    n = int(input().rstrip())
    if not n: return
    
    for _ in range(n):
        t = input().rstrip()
        if not t: return
        
        print(t[0] + t[-1])
    
if __name__ == "__main__":
    solve()
