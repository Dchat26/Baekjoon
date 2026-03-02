import sys
input = sys.stdin.readline

def solve():
    n = int(input())
    
    if n == 0:
        print(0)
        return
        
    n_list = [int(input()) for _ in range(n)]
    n_list.sort()
    
    s = int(n * 0.15 + 0.5)
    ns = n_list[s : n - s]
    
    if not ns:
        print(0)
    else:
        avg = sum(ns) / len(ns)
        print(int(avg + 0.5))
        
if __name__ == "__main__":
    solve()