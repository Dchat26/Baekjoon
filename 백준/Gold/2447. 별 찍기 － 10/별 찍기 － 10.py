import sys

input = sys.stdin.readline
write = sys.stdout.write

def draw_stars(n: int):
    if n == 1:
        return ['*']
    
    stars = draw_stars(n // 3)
    
    result = []
    for s in stars:
        result.append(s * 3)
    for s in stars:
        result.append(s + (' ' * (n // 3)) + s)
    for s in stars:
        result.append(s * 3)
        
    return result

def solve():
    n = int(input().rstrip())
    if not n: return
    
    write("\n".join(draw_stars(n)) + "\n")
    
if __name__ == "__main__":
    solve()