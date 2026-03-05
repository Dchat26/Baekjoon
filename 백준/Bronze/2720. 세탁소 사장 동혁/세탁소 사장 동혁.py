import sys
input = sys.stdin.read

def solve():
    data = input().split()
    if not data: return
    n = int(data[0])
    
    for i in range(1, n + 1):
        s1, a = divmod(int(data[i]), 25)
        s2, a = divmod(a, 10)
        s3, a = divmod(a, 5)
        s4, a = divmod(a, 1)
        
        print(s1, s2, s3, s4)
        
if __name__ == "__main__":
    solve()