import sys
input = sys.stdin.readline
write = sys.stdout.write

NUM = 1000000

def solve():
    check = [True] * (NUM + 1)
    check[0] = check[1] = False
    
    for i in range(2, int(NUM ** 0.5) + 1):
        if check[i]:
            for j in range(i * i, NUM + 1, i):
                check[j] = False
    
    n = int(input().rstrip())
    if not n: return
    
    result = []
    for _ in range(n):
        line = int(input().rstrip())
        count = 0
        for i in range(2, (line // 2) + 1):
            if check[i]:
                if check[line - i]:
                    count += 1
        result.append(str(count))
        
    write("\n".join(result) + "\n")
        
if __name__ == "__main__":
    solve()