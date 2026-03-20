import sys

input = sys.stdin.readline
write = sys.stdout.write

def fibo(num: int):
    if num == 0: return 0
    if num == 1: return 1
    
    return fibo(num - 1) + fibo(num - 2)

def solve():
    n = int(input().rstrip())
    if 0 > n or n > 20: return
    
    result = fibo(n)
    
    write(str(result) + "\n")
    
if __name__ == "__main__":
    solve()