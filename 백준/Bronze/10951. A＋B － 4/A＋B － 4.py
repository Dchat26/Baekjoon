import sys

input = sys.stdin.readline

for line in sys.stdin:
    print(sum(map(int, line.split())))