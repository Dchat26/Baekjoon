import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
    n = int(input().rstrip())
    if not n: return
    
    costs = [list(map(int, input().split())) for _ in range(n)]
    
    for i in range(1, n):
        costs[i][0] += min(costs[i-1][1], costs[i-1][2])
        costs[i][1] += min(costs[i-1][0], costs[i-1][2])
        costs[i][2] += min(costs[i-1][0], costs[i-1][1])
    
    write(str(min(costs[n - 1])) + "\n")

if __name__ == "__main__":
    solve()