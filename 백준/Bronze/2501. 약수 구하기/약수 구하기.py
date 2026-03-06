n, c = map(int, input().split())

n_list = []
for i in range(n, 0, -1):
    a, b = divmod(n, i)
    if b == 0:
        n_list.append(a)
        
if len(n_list) < c:
    print("0")
else:
    print(n_list[c-1])