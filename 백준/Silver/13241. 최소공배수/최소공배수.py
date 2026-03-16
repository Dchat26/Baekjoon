import sys
input = sys.stdin.readline
write = sys.stdout.write
# import cmath

def gcd(a: int, b: int):
    while b > 0:
        a, b = b, a % b
        
    return a

def solve():
    line = input().split()
    if not line: return
    a, b = map(int, line)
    
    g = gcd(a, b)
    l = (a // g) * b
    
    write(str(l) + "\n")
    
if __name__ == "__main__":
    solve()
    



"""def solve():
    n = int(input().rstrip())
    if not n: return
    if not 1 <= n or not n <= 1000: return
    
    
    result = []
    for _ in range(n):
        line = input().split()
        if not line: return
        
        a, b = map(int, line)
        if not 1 <= a or not a <= 45000 or not 1 <= b or not b <= 45000: return
        
        g = math.gcd(a, b)
        l = (a * b) // g
        
        result.append(str(l))
        
    write("\n".join(result) + "\n")
        
if __name__ == "__main__":
    solve()"""