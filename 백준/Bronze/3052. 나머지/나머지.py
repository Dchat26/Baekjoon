import sys
input = sys.stdin.read

def cal_remain(data: list[str]):
    result = set()
    for i in data:
        result.add(int(i) % 42)
        
    print(len(result))
    
def solve():
    data = input().split()
    if not data: return

    cal_remain(data)

if __name__ == "__main__":
    solve()
