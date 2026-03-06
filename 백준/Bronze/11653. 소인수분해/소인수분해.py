import sys
input = sys.stdin.readline

def solve():
    n = int(input().rstrip())
    if not n: return
    elif n == 1: return
    
    i = 2
    while i * i <= n:
        while n % i == 0:
            print(i)
            n //= i
        i += 1
        
    if n > 1:
        print(n)
            
if __name__ == "__main__":
    solve()