import sys
input = sys.stdin.readline

def GuGu(num: int):
    for i in range(1, 10):
        print(f"{num} * {i} = {num * i}")

def solve():
    try:
        line = input().rstrip()
        if not line: return
        
        num = int(line)
        GuGu(num)
    except ValueError:
        pass

if __name__ == "__main__":
    solve()
