n = int(input())

n_list = []
for _ in range(n):
    r, s = input().split()
    
    r = int(r)
    
    result = ""
    for i in s:
        result += i * r
    n_list.append(result)
    
print(*(st for st in n_list), sep='\n')