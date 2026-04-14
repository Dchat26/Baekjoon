import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
    n = int(input().rstrip())
    s = int(input().rstrip())
    if not n or not s: return
    
    target = (n // 100) * 100
    while target % s != 0: target += 1
    
    result = target % 100
    
    write(f"{result:02d}\n")
    
if __name__ == "__main__":
    solve()