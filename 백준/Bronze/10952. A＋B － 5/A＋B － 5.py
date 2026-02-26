import sys

input = sys.stdin.readline

n_list = []
while True:
    a, b = map(int, input().split())
    if a == 0 and b == 0:
        break
    n_list.append(a + b)
    
for i in n_list:
    print(i)