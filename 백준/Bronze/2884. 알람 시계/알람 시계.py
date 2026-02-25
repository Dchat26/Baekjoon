import sys
input = sys.stdin.readline

def Time(hour: int, minute: int) -> tuple:
    total_time = ((hour * 60) + minute) - 45
    total_time %= 1440
    
    resH, resM = divmod(total_time, 60)
    
    return resH, resM
   
def solve():
    try:
        line = input().split()
        if not line: return
        
        h, m = map(int, line)
        
        resH, resM = Time(h, m)
        
        print(resH, resM)
    except ValueError:
        pass

if __name__ == "__main__":
    solve()
