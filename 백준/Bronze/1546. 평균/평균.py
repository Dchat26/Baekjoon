import sys
input = sys.stdin.read

def re_avg(data: list[str]):
    n = int(data[0])
    nlist = list(map(int, data[1:]))
    max_val = max(nlist)
    
    print(sum(nlist) / max_val * 100 / n)

def solve():
    data = input().split()
    if not data: return
    
    re_avg(data)

if __name__ == "__main__":
    solve()