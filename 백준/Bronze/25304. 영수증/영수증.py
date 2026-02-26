full_price = int(input())
numbers = int(input())
price_number = [list(map(int, input().split())) for i in range(numbers)]

result = 0
for i in range(numbers):
    result += (price_number[i][0] * price_number[i][1])
    
if result == full_price:
    print("Yes")
else:
    print("No")