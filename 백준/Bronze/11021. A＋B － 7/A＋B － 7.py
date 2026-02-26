import sys

n = int(sys.stdin.readline().rstrip())

print(*(f"Case #{i + 1}: {sum(map(int, sys.stdin.readline().split()))}" for i in range(n)), sep='\n')  