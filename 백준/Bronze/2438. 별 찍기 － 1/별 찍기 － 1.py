import sys
input = sys.stdin.readline

def Star(n: int):
    for i in range(1, n + 1):
        print("*" * i)

def solve():
    try:
        line = input().rstrip()
        if not line: return
        n = int(line)
        
        Star(n)
        
    except ValueError:
        pass

if __name__ == "__main__":
    solve()
