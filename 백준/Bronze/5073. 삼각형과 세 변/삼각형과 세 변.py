import sys

def solve():
    for line in sys.stdin:
        a, b, c = map(int, line.split())
        
        if a == 0 and b == 0 and c == 0:
            break
        
        if  2 * max(a, b, c) >= a + b + c:
            print("Invalid")
        elif a == b and b == c:
            print("Equilateral")
        elif a == b or a == c or b == c:
            print("Isosceles")
        else:
            print("Scalene")
            
if __name__ == "__main__":
    solve()
