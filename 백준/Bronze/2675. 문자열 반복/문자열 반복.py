import sys
input = sys.stdin.readline

def solve():
    n = int(input().rstrip())
    if not n: return
    
    for _ in range(n):
        t = input().split()
        if not t: return
        
        tn = int(t[0])
        for i in t[1]:
            print(i * tn, end="")
        print()
    
if __name__ == "__main__":
    solve()
