N, M = map(int, input().split())

A_list = [list(map(int, input().split())) for _ in range(N)]
B_list = [list(map(int, input().split())) for _ in range(N)]

for i in range(N):
    for s in range(M):
        print(A_list[i][s] + B_list[i][s], end=' ')
    print()