h, m = map(int, input().split())

total_time = ((h * 60) + m) - 45

total_time %= 1440

set_h = total_time // 60
set_m = total_time % 60

print(set_h, set_m)
