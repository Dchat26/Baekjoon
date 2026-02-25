import sys
input = sys.stdin.readline

def dice(a: int, b: int, c: int):
    if a == b == c:
        return 10000 + (a * 1000)
    elif a == b or a == c:
        return 1000 + (a * 100)
    elif b == c:
        return 1000 + (b * 100)
    else:
        return 100 * max(a, b, c)

def solve():
    try:
        line = input().split()
        if len(line) < 3: return
        
        a, b, c = map(int, line)
        result = dice(a, b, c)
        
        print(result)
    except ValueError:
        pass

if __name__ == "__main__":
    solve()
