import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
    n = int(input().rstrip())
    if not n: return
    
    nlist = list(map(int, input().split()))
    
    dp = [1] * n
    
    for i in range(n):
        for j in range(i):
            if nlist[i] > nlist[j]:
                dp[i] = max(dp[i], dp[j] + 1)
                
    write(str(max(dp)) + "\n")

if __name__ == "__main__":
    solve()