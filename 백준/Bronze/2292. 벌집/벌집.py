import sys
input = sys.stdin.readline

def solve():
    n = int(input().rstrip())
    if not n: return
    
    end_room = 1
    count = 1
    while n > end_room:
        end_room += 6 * count
        count += 1
        
    print(count)
    
if __name__ == "__main__":
    solve()