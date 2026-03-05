N, B = map(int, input().split())

chars = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"

result = ""
while N > 0:
    N, a = divmod(N, B)
    result += chars[a]
    
print(result[::-1])