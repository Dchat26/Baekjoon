import sys
input = sys.stdin.readline

def solve():
    line = input().split()
    if not line: return
    a, b = map(str, line)
    
    print(int(a, int(b)))   
        
if __name__ == "__main__":
    solve()
