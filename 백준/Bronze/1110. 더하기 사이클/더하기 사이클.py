import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
    n = int(input().rstrip())
    if (n == 0):
        write("1\n")
        return
    
    if (n < 10): n *= 10
    
    res = n
    count = 0
    while (True):
        count += 1
        current = (res % 10) * 10
        temp = ((res // 10) + (res % 10)) % 10
        res = current + temp
        
        if res == n:
            break
        
    write(str(count) + "\n")

if __name__ == "__main__":
    solve()