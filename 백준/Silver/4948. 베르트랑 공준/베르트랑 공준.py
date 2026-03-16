import sys
input = sys.stdin.readline
write = sys.stdout.write

NUM = 246912

def solve():
    check = [True] * (NUM + 1)
    check[0] = check[1] = False
    
    for i in range(2, int(NUM ** 0.5) + 1):
        if check[i]:
            for j in range(i * i, NUM + 1, i):
                check[j] = False
                
    count_check = [0] * (NUM + 1)
    for i in range(1, NUM + 1):
        count_check[i] = count_check[i-1] + (1 if check[i] else 0)
    
    result = []
    while True:
        n = int(input().rstrip())
        if not n: break
        
        result.append(str(count_check[2 * n] - count_check[n]))
        
    write("\n".join(result) + "\n")
        
if __name__ == "__main__":
    solve()