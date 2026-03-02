import sys
input = sys.stdin.readline

def solve():
    s = input().rstrip()
    if not s: return
    
    dial = ["ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"]
    
    total_time = 0
    for i in s:
        for j, group in enumerate(dial):
            if i in group:
                total_time += j + 3
    
    print(total_time)
    
if __name__ == "__main__":
    solve()
