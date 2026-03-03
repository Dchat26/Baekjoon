n = input()

alp = ['c=', 'c-', 'd-', 'lj', 'nj', 's=', 'dz=', 'z=']

for i in alp:
    if i in n:
        n = n.replace(i, '*')

print(len(n))