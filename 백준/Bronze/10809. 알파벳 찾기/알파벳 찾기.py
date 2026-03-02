import sys
input = sys.stdin.readline

def solve():
    s = input().rstrip()
    if not s: return
    
    for i in range(ord('a'), ord('z') + 1):
        c = chr(i)
        
        print(s.find(c), end=" ")
    
if __name__ == "__main__":
    solve()
