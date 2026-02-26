import sys
input = sys.stdin.readline

def ynPrice(total: int, n: int):
    CalPrice = 0
    for _ in range(n):
        line = input().split()
        if not line: return
        
        a, b = map(int, line)
        CalPrice += a * b
        
    if total == CalPrice:
        print("Yes")
    else:
        print("No")

def solve():
    try:
        line = input().rstrip()
        if not line: return
        total_price = int(line)
        
        line = input().rstrip()
        if not line: return
        n = int(line)
        
        ynPrice(total_price, n)
    except ValueError:
        pass

if __name__ == "__main__":
    solve()
