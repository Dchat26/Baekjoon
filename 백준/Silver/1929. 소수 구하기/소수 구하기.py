import sys
input = sys.stdin.readline
write = sys.stdout.write

def solve():
    line = input().split()
    if not line: return
    n, m = map(int, line)
    
    check = [True] * (m + 1)
    check[0] = check[1] = False
    
    for i in range(2, int(m ** 0.5) + 1):
        if check[i]:
            for j in range(i * i, m + 1, i):
                check[j] = False
    
    result = [str(i) for i in range(n, m + 1) if check[i]]
    
    if result:
        write("\n".join(result) + "\n")
    
if __name__ == "__main__":
    solve()