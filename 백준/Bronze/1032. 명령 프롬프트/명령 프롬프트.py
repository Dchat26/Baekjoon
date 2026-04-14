import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
    n = int(input().rstrip())
    s = list(input().rstrip())
    if not n or not s: return
    
    for _ in range(n - 1):
        s2 = input().rstrip()
        if not s2: return
        
        for i in range(len(s)):
            if s[i] != s2[i]:
                s[i] = "?"
                
    write("".join(s) + "\n")
    
if __name__ == "__main__":
    solve()