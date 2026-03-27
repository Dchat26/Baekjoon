import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
    n = int(input().rstrip())
    if not n: return
    
    if n == 1: 
        write("1\n")
        return
    elif n == 2:
        write("2\n")
        return
    
    dp = [0] * (n + 1)
    dp[1] = 1
    dp[2] = 2
    
    for i in range(3, n + 1):
        dp[i] = (dp[i - 1] + dp[i - 2]) % 15746
        
    write(f"{dp[n]}\n")
    
if __name__ == "__main__":
    solve()