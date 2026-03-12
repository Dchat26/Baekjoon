import sys
input = sys.stdin.readline

def solve():
    n = int(input().rstrip())
    if not n: return
    
    count = 0
    while n >= 0:
        if n % 5 == 0:
            count += n // 5
            print(count)
            return
        else:
            n -= 3
            count += 1
    print(-1)
    
if __name__ == "__main__":
    solve()