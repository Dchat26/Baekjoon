a, b, e, c, d, f = map(int, input().split())

x = ((e * d) - (b * f)) // ((a * d) - (b * c))
y = ((a * f) - (e * c)) // ((a * d) - (b * c))

print(x, y)
