import sys

input = sys.stdin.readline
write = sys.stdout.write

def hanoi(n: int, start: int, end: int, sub: int, count_list: list[int], result: list[int]):
    count_list[0] += 1
    if n == 1:
        result.append((start, end))
        return

    hanoi(n - 1, start, sub, end, count_list, result)
    result.append((start, end))
    hanoi(n - 1, sub, end, start, count_list, result)
    
def solve():
    n = int(input().rstrip())
    if 1 > n or n > 20: return
    
    count_list = [0]
    result = []
    
    hanoi(n, 1, 3, 2, count_list, result)
    
    write(f"{count_list[0]}\n")
    write("\n".join(f"{start} {end}" for start, end in result) + "\n")

if __name__ == "__main__":
    solve()