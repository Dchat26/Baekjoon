import sys
input = sys.stdin.readline

def solve():
    n = int(input().rstrip())
    if not n: return
    
    num = 666
    count = 0
    while True:
        if '666' in str(num):
            count += 1
            
        if count == n:
            print(num)
            break
        
        num += 1
    
if __name__ == "__main__":
    solve()