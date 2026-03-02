a, b = input().split()

a1 = "".join(reversed(a))
b1 = "".join(reversed(b))

print(max(a1, b1))