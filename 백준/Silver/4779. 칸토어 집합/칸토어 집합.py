import sys

input = sys.stdin.readline
write = sys.stdout.write

def canto(arr, start, length):
    if length == 1:
        return
    
    next_len = length // 3
    
    for i in range(start + next_len, start + next_len * 2):
        arr[i] = ' '
    
    canto(arr, start, next_len)               
    canto(arr, start + next_len * 2, next_len) 

def solve():
    result = []
    for line in sys.stdin:
        n = int(line.rstrip())
        if 0 > n or n > 12: break
    
        total_len = 3 ** n
        arr = ['-'] * total_len
    
        canto(arr, 0, total_len)
    
        result.append(arr)
    
    for i in range(len(result)):
        write("".join(result[i]) + "\n")
    
if __name__ == "__main__":
    solve()