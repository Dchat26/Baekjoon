import sys
input = sys.stdin.readline

a = int(input().rstrip())
b = input().rstrip()

res3 = a * int(b[2])
res4 = a * int(b[1])
res5 = a * int(b[0])
res6 = res3 + (res4 * 10) + (res5 * 100)

print(res3, res4, res5, res6, sep='\n')
