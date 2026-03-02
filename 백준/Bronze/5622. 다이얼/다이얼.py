s = input()

dial = ['ABC', 'DEF', 'GHI', 'JKL', 'MNO', 'PQRS', 'TUV', 'WXYZ']

time_s = 0
for i in s:
    for a, group in enumerate(dial):
        if i in group:
            time_s += a + 3

print(time_s)