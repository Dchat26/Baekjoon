N, M = map(int, input().split())

n_list = list(range(1, N + 1))

for i in range(M):
    a, b = map(int, input().split())
    n_list[a-1:b] = n_list[a-1:b][::-1]
    
print(*n_list)