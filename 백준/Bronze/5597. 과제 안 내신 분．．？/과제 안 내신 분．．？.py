import sys
input = sys.stdin.read

def no_students(data: list[str]):
    check = [False] * 31
    
    for num_str in data:
        num = int(num_str)
        check[num] = True
        
    for i in range(1, 31):
        if not check[i]:
            print(i)
    
def solve():
    data = input().split()
    if not data: return

    no_students(data)

if __name__ == "__main__":
    solve()