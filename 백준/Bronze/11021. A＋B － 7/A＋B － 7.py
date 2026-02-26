import sys
input = sys.stdin.readline

def Mul(n: int):
    for i in range(1, n + 1):
        line = input().split()
        if not line: return
        
        a, b = map(int, line)
        
        print(f"Case #{i}: {a + b}")

def solve():
    try:
        line = input().rstrip()
        if not line: return
        n = int(line)
        
        Mul(n)
        
    except ValueError:
        pass

if __name__ == "__main__":
    solve()
