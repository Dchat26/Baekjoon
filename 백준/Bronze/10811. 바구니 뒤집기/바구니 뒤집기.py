import sys
input = sys.stdin.read

def swap_basket(data: list[str]):
    n = int(data[0])
    m = int(data[1])
    
    nlist = list(range(1, n + 1))
    
    current = 2
    for _ in range(m):
        i = int(data[current]) - 1
        j = int(data[current + 1])
        
        nlist[i:j] = nlist[i:j][::-1]
        
        current += 2
    
    print(*nlist)
        
def solve():
    data = input().split()
    if not data: return

    swap_basket(data)

if __name__ == "__main__":
    solve()
