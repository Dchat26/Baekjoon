n = int(input())

count = 0
for _ in range(n):
    s = input()
    is_count = True
    
    for i in range(len(s) - 1):
        if s[i] != s[i+1]:
            if s[i] in s[i+1:]:
                is_count = False
                break
            
    if is_count:
        count += 1

print(count)