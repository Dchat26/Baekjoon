import sys

s_list = [list(line.strip()) for line in sys.stdin]

for i in range(15):
    for s in range(5):
        if i < len(s_list[s]):
            print(s_list[s][i], end='')