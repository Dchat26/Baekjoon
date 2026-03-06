import sys

for line in sys.stdin:
    line = int(line)
    if line == -1:
        break
    
    line_list = [i for i in range(1, line) if line % i == 0]
    if sum(line_list) == line:
        print(f'{line} = ', end='')
        print(" + ".join(map(str, line_list)))
    else:
        print(f'{line} is NOT perfect.')