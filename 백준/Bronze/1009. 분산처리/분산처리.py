import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
    n = int(input().rstrip())
    if not n: return
    
    result = []
    for _ in range(n):
        a, b = map(int, input().split())
        
        res = pow(a, b, 10)
        
        if res == 0:
            result.append("10")
        else:
            result.append(str(res))
            
    write("\n".join(result) + "\n")

if __name__ == "__main__":
    solve()