n_list = [int(input()) for i in range(9)]

print(max(n_list))

count = 1
for i in n_list:
    if max(n_list) != i:
        count += 1
    else:
        print(count)