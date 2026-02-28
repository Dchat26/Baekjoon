n, f = map(int, input().split())
n_list = list(map(int, input().split()))

print(*(i for i in n_list if i < f))