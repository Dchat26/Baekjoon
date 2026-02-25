import sys
input = sys.stdin.readline

def Quadrant(x, y):
    if x > 0 and y > 0:
        return 1
    elif x < 0 and y > 0:
        return 2
    elif x < 0 and y < 0:
        return 3
    elif x > 0 and y < 0:
        return 4

def solve():
    x = int(input().rstrip())
    y = int(input().rstrip())
    
    result = Quadrant(x, y)
    
    print(result)

if __name__ == "__main__":
    solve()
