n = int(input())

n_list = [list(map(int, input().split())) for i in range(n)]

for i in range(n):
    print(sum(n_list[i]))