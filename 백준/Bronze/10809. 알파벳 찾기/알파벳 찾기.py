n = input()

for i in range(ord('a'), ord('z') + 1):
    char = chr(i)
    
    print(n.find(char), end=' ')