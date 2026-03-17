import sys
from collections import deque
input = sys.stdin.readline
write = sys.stdout.write

def solve():
    n = int(input().rstrip())
    if not n: return
    
    result = []
    for _ in range(n):
        s = input().rstrip()
        if not s: break
        if not 2 <= len(s) <= 50: break
        
        Q = deque()
        is_TF = True
        for i in s:
            if i == "(":
                Q.append(s)
            else:
                if Q:
                    Q.pop()
                else:
                    is_TF = False
                    break
        
        if is_TF and not Q:
            result.append("YES")
        else:
            result.append("NO")
            
    write("\n".join(result) + "\n")
                        
if __name__ == "__main__":
    solve()