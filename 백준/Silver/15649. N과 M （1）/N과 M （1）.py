import sys

input = sys.stdin.readline
write = sys.stdout.write

def sq(depth: int, m: int, result: list[str], ans: list[int], visied: list[bool], n: int):
    if depth == m:
        result.append(" ".join(map(str, ans)))
    
    for i in range(1, n + 1):
        if not visied[i]:
            visied[i] = True
            ans.append(i)
            
            sq(depth + 1, m, result, ans, visied, n)
            
            ans.pop()
            visied[i] = False
            
def solve():
    line = input().split()
    if not line: return
    n, m = map(int, line)
    
    result = []
    ans = []
    visited = [False] * (n + 1)
    
    sq(0, m, result, ans, visited, n)
    
    write("\n".join(result) + "\n")

if __name__ == "__main__":
    solve()