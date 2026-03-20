import sys

def canto(arr, start, length):
    if length == 1:
        return
    
    next_len = length // 3
    
    for i in range(start + next_len, start + next_len * 2):
        arr[i] = ' '
    

    canto(arr, start, next_len)               
    canto(arr, start + next_len * 2, next_len) 

while True:
    try:
        line = sys.stdin.readline()
        if not line: break 
        
        n = int(line.strip())
        total_len = 3 ** n
        nline = ['-'] * total_len
        
        canto(nline, 0, total_len)
        
        print(''.join(nline))
    except EOFError:
        break
    except ValueError:
        break