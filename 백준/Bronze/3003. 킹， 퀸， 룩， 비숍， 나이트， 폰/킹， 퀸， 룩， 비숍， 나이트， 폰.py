n = list(map(int, input().split()))

n_list = [1, 1, 2, 2, 2, 8]

r_list = []
for i in range(6):
    r = n_list[i] - n[i]
    r_list.append(r)
    
print(*r_list)