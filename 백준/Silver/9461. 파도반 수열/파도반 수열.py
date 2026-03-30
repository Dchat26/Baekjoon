import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
    wave = [0] * 101
    wave[1] = wave[2] = wave[3] = 1
    
    for i in range(4, 101):
        wave[i] = wave[i - 2] + wave[i - 3]
    
    n = int(input().rstrip())
    if not n: return
    
    result = []
    for _ in range(n):
        a = int(input().rstrip())
        if not a: return
        
        result.append(str(wave[a]))
        
    write("\n".join(result) + "\n")
    
if __name__ == "__main__":
    solve()