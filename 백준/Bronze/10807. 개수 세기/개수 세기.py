import sys
input = sys.stdin.readline

n = int(input())
n_list = [list(map(int, input().split()))]
f = int(input())

print(*(num.count(f) for num in n_list))