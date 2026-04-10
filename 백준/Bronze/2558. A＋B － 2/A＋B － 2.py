import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
    a = int(input().rstrip())
    b = int(input().rstrip())
    if not a or not b: return
    
    write(str(a + b) + "\n")
        
if __name__ == "__main__":
    solve()