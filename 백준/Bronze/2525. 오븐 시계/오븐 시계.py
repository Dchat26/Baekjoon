import sys
input = sys.stdin.readline

def Time(hour: int, minute: int, cookTime: int) -> tuple:
    total_time = ((hour * 60) + minute) + cookTime
    total_time %= 1440
    
    return divmod(total_time, 60)

def solve():
    try:
        hmInput = input().split()
        if len(hmInput) < 2: return
        h, m = map(int, hmInput)
        
        cookInput = int(input().rstrip())
        cook_time = cookInput
        
        resH, resM = Time(h, m, cook_time)
        
        print(resH, resM)
    except ValueError:
        pass

if __name__ == "__main__":
    solve()