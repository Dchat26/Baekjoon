import sys
input = sys.stdin.readline

def p_str(s: str, i: int):
    print(s[i-1])

def solve():
    s = input().rstrip()
    if not s: return
    
    i = int(input().rstrip())
    if not i: return
    
    p_str(s, i)
    
if __name__ == "__main__":
    solve()
