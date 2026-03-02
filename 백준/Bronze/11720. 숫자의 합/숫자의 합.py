import sys
input = sys.stdin.readline

def solve():
    n = int(input().rstrip())
    if not n: return
    
    s = input().rstrip()
    if not s: return
    
    ssum = 0
    for i in range(len(s)):
        ssum += int(s[i])
        
    print(ssum)
    
if __name__ == "__main__":
    solve()