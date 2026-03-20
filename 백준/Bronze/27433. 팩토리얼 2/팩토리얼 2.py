import sys

input = sys.stdin.readline
write = sys.stdout.write

def fac(num: int):
    if num <= 1: return 1
    
    return num * fac(num - 1)

def solve():
    n = int(input().rstrip())
    if 0 > n or n > 20: return
    
    result = fac(n)
    
    write(str(result) + "\n")
    
if __name__ == "__main__":
    solve()