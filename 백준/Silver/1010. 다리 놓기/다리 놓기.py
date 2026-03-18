n = int(input())

for _ in range(n):
    a, b = map(int, input().split())
    
    ap = 1
    for i in range(a, 0, -1): ap *= i

    bp = 1
    for j in range(b, 0, -1): bp *= j
    
    bap = 1
    for k in range((b - a), 0, -1): bap *= k
    
    print(bp // (ap * bap))