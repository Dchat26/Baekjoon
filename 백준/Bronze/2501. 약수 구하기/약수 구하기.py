import sys
input = sys.stdin.readline

def solve():
    line = input().split()
    if not line: return
    a, b = map(int, line)
    
    count = 0
    for i in range(1, a + 1):
        if a % i == 0:
            count += 1
            if count == b:
                print(i)
                return
    print(0)
        
if __name__ == "__main__":
    solve()
