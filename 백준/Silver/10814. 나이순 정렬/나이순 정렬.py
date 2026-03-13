n = int(input())

n_list = [(int(a), b) for a, b in (input().split() for _ in range(n))]

n_list.sort(key=lambda x: x[0])

for i in n_list:
    print(*i)