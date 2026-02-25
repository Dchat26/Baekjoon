import sys
input = sys.stdin.readline

def solve():
    a, b = map(int, input().split())

    if (a > b):
        print(">")
    elif (a < b):
        print("<")
    elif (a == b):
        print("==")

if __name__ == "__main__":
    solve()
