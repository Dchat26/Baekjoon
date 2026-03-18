import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
   n = int(input().rstrip())
   if not n: return
   
   result = n * n - n
   
   write(str(result) + "\n")
        
if __name__ == "__main__":
    solve()