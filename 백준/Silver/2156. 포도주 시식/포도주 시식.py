import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
    n = int(input().rstrip())
    if not n: return
    
    wine = [0] * 10001
    for i in range(1, n + 1):
        wine[i] = int(input().rstrip())
        
    dp = [0] * 10001
    dp[1] = wine[1]
    
    if n > 1:
        dp[2] = wine[1] + wine[2]
        
    for i in range(3, n + 1):
        dp[i] = max(dp[i-1], dp[i-2] + wine[i], dp[i-3] + wine[i-1] + wine[i])
        
    write(str(dp[n]) + "\n")

if __name__ == "__main__":
    solve()