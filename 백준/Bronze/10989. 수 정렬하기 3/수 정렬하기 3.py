import sys
input = sys.stdin.readline
write = sys.stdout.write
        
def solve():
    n = int(input().rstrip())
    if not n: return
    
    count = [0] * 10001
    
    for _ in range(n):
        count[int(input().rstrip())] += 1
        
    for i in range(10001):
        if count[i] != 0:
            for _ in range(count[i]):
                write(str(i) + "\n")
    
if __name__ == "__main__":
    solve()