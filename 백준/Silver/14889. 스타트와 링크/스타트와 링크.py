import sys
from itertools import combinations

input = sys.stdin.readline
write = sys.stdout.write

def get_diff(start_team, n, nlist):
    link_team = [i for i in range(n) if i not in start_team] 
    
    start_score = sum(nlist[p1][p2] + nlist[p2][p1] for p1, p2 in combinations(start_team, 2))
    link_score = sum(nlist[p3][p4] + nlist[p4][p3] for p3, p4 in combinations(link_team, 2))
    
    return abs(start_score - link_score)

def dfs(idx, count, n, nlist, start_team, min_diff): 
    if count == n // 2:
        diff = get_diff(start_team, n, nlist)
        min_diff[0] = min(min_diff[0], diff)
        return

    for i in range(idx, n):
        start_team.append(i)
        dfs(i + 1, count + 1, n, nlist, start_team, min_diff) 
        start_team.pop()

def main():
    n = int(input())
    if not n: return
    if n % 2 != 0: return
    
    nlist = [list(map(int, input().split())) for _ in range(n)]
    
    min_diff = [1000000000]
    
    dfs(1, 1, n, nlist, [0], min_diff)
    
    write(str(min_diff[0]) + "\n")

if __name__ == "__main__":
    main()