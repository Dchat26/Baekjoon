import sys
input = sys.stdin.readline

def solve():
    a = int(input().rstrip())

    if (a >= 90):
        print("A")
    elif (89 >= a >= 80):
        print("B")
    elif (79 >= a >= 70):
        print("C")
    elif (69 >= a >= 60):
        print("D")
    else:
        print("F")

if __name__ == "__main__":
    solve()
