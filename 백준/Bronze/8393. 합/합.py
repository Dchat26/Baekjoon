import sys
input = sys.stdin.readline

def Total(n: int):
    total = 0
    for i in range(1, n + 1):
        total += i
        
    print(total)

def solve():
    try:
        line = input().rstrip()
        if not line: return
        n = int(line)
        
        Total(n)
    except ValueError:
        pass

if __name__ == "__main__":
    solve()
