import sys

input = sys.stdin.readline
write = sys.stdout.write

def sq(depth: int, start: int, m: int, result: list[str], ans: list[int], n: int):
    if depth == m:
        result.append(" ".join(map(str, ans)))
        return
    
    for i in range(start, n + 1):
        ans.append(i)
        
        sq(depth + 1, i, m, result, ans, n)
            
        ans.pop()

            
def solve():
    line = input().split()
    if not line: return
    n, m = map(int, line)
    
    result = []
    ans = []
    
    sq(0, 1, m, result, ans, n)
    
    write("\n".join(result) + "\n")

if __name__ == "__main__":
    solve()