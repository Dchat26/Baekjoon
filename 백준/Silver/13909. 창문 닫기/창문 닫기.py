import sys
input = sys.stdin.readline
write = sys.stdout.write

def solve():
    n = int(input().rstrip())
    if not n: return
    
    write(str(int(n ** 0.5)) + "\n")
    
if __name__ == "__main__":
    solve()
    
    
    
    
"""def solve():
    n = int(input().rstrip())
    if not n: return
    
    windows = [False] * (n + 1)
    
    for i in range(1, n + 1):
        for j in range(i, n + 1, i):
            if windows[j]:
                windows[j] = False
            else:
                windows[j] = True
    
    result = str(sum(i for i in windows if i))
    
    write(result + "\n")
    
if __name__ == "__main__":
    solve()"""