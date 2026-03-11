import sys
input = sys.stdin.readline

def solve():
    n = input().rstrip()
    if not n: return
    
    nlen = len(n)
    n = int(n)
    start = max(0, n - 9 * nlen)

    for i in range(start, n + 1):
        sumn = sum(map(int, str(i)))
        
        if i + sumn == n:
            print(i)
            return
        
    print(0)
    
if __name__ == "__main__":
    solve()