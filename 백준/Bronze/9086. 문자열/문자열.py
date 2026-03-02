n = int(input())

n_list = list(input() for _ in range(n))

for i in n_list:
    print(i[0] + i[-1])