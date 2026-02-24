import sys
input = sys.stdin.readline

a, b = map(int, input().split())

res1 = a + b
res2 = a - b
res3 = a * b
res4 = a // b
res5 = a % b

print(res1, res2, res3, res4, res5, sep='\n')