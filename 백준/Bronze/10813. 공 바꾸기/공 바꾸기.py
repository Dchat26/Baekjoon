import sys
input = sys.stdin.readline

def swap_basket(basket: list[int], m: int):
    for _ in range(m):
        line = input().split()
        if not line: return
        
        i, j = map(int, line)
        
        basket[i - 1], basket[j - 1] = basket[j - 1], basket[i - 1]

def solve():
    line = input().split()
    if not line: return
    
    n, m = map(int, line)
    basket = list(range(1, n + 1))
    
    swap_basket(basket, m)
    
    print(*basket)

if __name__ == "__main__":
    solve()
