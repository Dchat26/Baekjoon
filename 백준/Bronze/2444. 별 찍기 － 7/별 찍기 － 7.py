import sys
input = sys.stdin.readline

def star(n: int):
    for i in range(n):
        r = (2 * i) + 1
        s = n - i - 1
        print(' ' * s + '*' * r)

    for i in range(n - 2, -1, -1):
        r = (2 * i) + 1
        s = n - i - 1
        print(' ' * s + '*' * r)
    
def solve():
    n = int(input().rstrip())
    if not n: return
    
    star(n)
    
if __name__ == "__main__":
    solve()