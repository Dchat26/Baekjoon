n_list = list(int(input()) for _ in range(10))

d_list = []
for i in n_list:
    d_list.append(i % 42)
    
print(len(set(d_list)))