import sys
input = sys.stdin.readline

def solve():
    nlist = []
    for _ in range(3):
        n = int(input().rstrip())
        if not n: return
        nlist.append(n)
        
    if sum(nlist) == 180 and len(set(nlist)) == 1:
        print("Equilateral")
    elif sum(nlist) == 180 and len(set(nlist)) == 2:
        print("Isosceles")
    elif sum(nlist) == 180 and len(set(nlist)) == 3:
        print("Scalene")
    else:
        print("Error")
        
if __name__ == "__main__":
    solve()