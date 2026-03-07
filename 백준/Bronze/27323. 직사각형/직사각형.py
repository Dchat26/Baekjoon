import sys
input = sys.stdin.read

def solve():
    data = input().split()
    if not data: return
    a, b = map(int, data)
    
    print(a * b)
            
if __name__ == "__main__":
    solve()