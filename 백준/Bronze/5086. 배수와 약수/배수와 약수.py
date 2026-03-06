import sys

def solve():
    for line in sys.stdin:
        if not line: return
        a, b = map(int, line.split())
        
        if a == 0 and b == 0: 
            break
        elif a % b == 0:
            print("multiple")
        elif b % a == 0:
            print("factor")
        else: 
            print("neither")        
        
if __name__ == "__main__":
    solve()