import sys
input = sys.stdin.readline

def solve():
    line = input().split()
    if not line: return
    a1, a0 = map(int, line)
    
    c = int(input().rstrip())
    if not c: return
    
    n = int(input().rstrip())
    if not n: return
    
    if a1 * n + a0 <= c * n and c >= a1:
        print(1)
    else:
        print(0)
            
if __name__ == "__main__":
    solve()