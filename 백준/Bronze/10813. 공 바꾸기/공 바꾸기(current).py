import sys
input = sys.stdin.read

def swap_basket(data: list[str], baskets: list[int], m: int):
    current = 2
    for _ in range(m):
        i = int(data[current]) - 1
        j = int(data[current + 1]) - 1
        
        baskets[i], baskets[j] = baskets[j], baskets[i]
        
        current += 2
    
def solve():
    data = input().split()
    if not data: return
    
    n = int(data[0])
    m = int(data[1])
    baskets = list(range(1, n + 1))
    
    swap_basket(data, baskets, m)

    print(*baskets)

if __name__ == "__main__":
    solve()
