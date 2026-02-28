N, M = map(int, input().split())

n_list = [0] * N

for list in range(M):
    i, j, k = map(int, input().split())
    for change in range(i - 1, j):
        n_list[change] = k
        
print(*(n_list))