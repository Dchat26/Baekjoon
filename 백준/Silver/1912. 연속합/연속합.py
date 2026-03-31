import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
    n = int(input().rstrip())
    if not n: return
    
    nlist = list(map(int, input().split()))
    
    dp = [0] * n
    dp[0] = nlist[0]
    
    for i in range(1, n):
        dp[i] = max(nlist[i], dp[i - 1] + nlist[i])
        
    write(str(max(dp)) + "\n")
    
if __name__ == "__main__":
    solve()