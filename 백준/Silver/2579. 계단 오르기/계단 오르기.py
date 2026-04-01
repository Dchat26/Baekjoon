import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
    n = int(input().rstrip())
    if not n: return
    
    stair = [0] * (n + 1)
    for i in range(1, n + 1):
        stair[i] = int(input().rstrip())
        if not stair[i]: break

    if n == 1:
        write(str(stair[1]) + "\n")
        return
    
    if n == 2:
        write(str(stair[1] + stair[2]) + "\n")
        return

    dp = [0] * (n + 1)
    dp[1] = stair[1]
    dp[2] = stair[1] + stair[2]
    dp[3] = max(stair[1] + stair[3], stair[2] + stair[3])

    for i in range(4, n + 1):
        dp[i] = stair[i] + max(dp[i-3] + stair[i-1], dp[i-2])

    write(str(dp[n]) + "\n")

if __name__ == "__main__":
    solve()