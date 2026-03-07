import sys
input = sys.stdin.readline

def solve():
    line = input().split()
    if not line: return
    
    a, b, c = map(int, line)
    if 2 * max(a, b, c) < a + b + c:
        print(a + b + c)
    else:
        temp = a + b + c - max(a, b, c)
        
        print(2 * temp - 1)
            
if __name__ == "__main__":
    solve()