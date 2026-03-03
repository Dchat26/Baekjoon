import sys
input = sys.stdin.readline

def solve():
    n = int(input().rstrip())
    if not n: return
    
    count = 0
    for _ in range(n):
        s = input().rstrip()
        if not s: return
        
        is_count = True
        for i in range(len(s) - 1):
            if s[i] != s[i+1]:
                if s[i] in s[i+1:]:
                    is_count = False
        
        if is_count: count += 1
    
    print(count)
    
if __name__ == "__main__":
    solve()
