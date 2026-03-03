s = input().upper()

compare = 0
alp = ""
for i in range(ord('A'), ord('Z') + 1):
    r = s.count(chr(i))
    if r > compare:
        compare = r
        alp = chr(i)
    elif r == compare:
        alp = '?'

print(alp)