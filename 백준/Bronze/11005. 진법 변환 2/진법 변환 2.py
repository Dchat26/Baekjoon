import sys
input = sys.stdin.readline

def solve():
    line = input().split()
    if not line: return
    n, b = map(int, line)
    
    chars = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    
    result = ""
    while (n > 0):
        n, a = divmod(n, b)
        result += chars[a]
        
    print(result[::-1])
        
if __name__ == "__main__":
    solve()
