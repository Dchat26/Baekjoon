import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
    n = int(input().rstrip())
    if not n: return
        
    count = 0
    for i in range(1, n + 1):
        if i < 100:
            count += 1
        else:
            num = str(i)
            if int(num[0]) - int(num[1]) == int(num[1]) - int(num[2]):
                count += 1
                
    write(str(count) + "\n")
    
if __name__ == "__main__":
    solve()