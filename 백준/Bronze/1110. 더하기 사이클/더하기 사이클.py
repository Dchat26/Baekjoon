import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
    line = input().rstrip()
    if not line: return
    
    n = int(line)
    origin = n
    count = 0
    
    while True:
        count += 1
        temp = (n // 10 + n % 10) % 10
        n = (n % 10) * 10 + temp
        
        if origin == n:
            break
        
    write(str(count) + "\n")

if __name__ == "__main__":
    solve()