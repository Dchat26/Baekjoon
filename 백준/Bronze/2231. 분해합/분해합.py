n = int(input())

for i in range(1, n + 1):
    sumn = sum(map(int, str(i)))
    if sumn + i == n:
        print(i)
        break
else:
    print(0)