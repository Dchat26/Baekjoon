import sys

input = sys.stdin.readline

n = int(input())

n_list = [list(map(int, input().split())) for i in range(n)]

for i in range(n):
    a, b = n_list[i]
    
    print(f"Case #{i + 1}: {a} + {b} = {a + b}")