import sys

n = sys.stdin.readline()
n_list = set(sys.stdin.readline().split())

m = sys.stdin.readline()
m_list = sys.stdin.readline().split()

for i in m_list:
    if i in n_list:
        print(1, end=' ')
    else:
        print(0, end=' ')
