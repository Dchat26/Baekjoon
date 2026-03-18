import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
   line = input().rstrip()
   if not line: return
   n = int(line)
   
   result = 1
   for i in range(1, n + 1):
       result *= i
   
   write(str(result) + "\n")
        
if __name__ == "__main__":
    solve()