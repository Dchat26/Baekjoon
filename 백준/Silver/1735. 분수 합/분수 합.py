import sys
input = sys.stdin.read
write = sys.stdout.write

def gcd(a: int, b: int):
    while b:
        a, b = b, a % b
    
    return a

def solve():
    data = input().split()
    if not data: return
    a, b, c, d = map(int, data)
    
    up = (a * d) + (b * c)
    down = b * d
    
    g = gcd(up, down)
    
    result = [str(up // g), str(down // g)]
    
    write(" ".join(result) + "\n")
    
if __name__ == "__main__":
    solve()