import sys

score_board = {'A+': 4.5, 'A0': 4.0, 'B+': 3.5, 'B0': 3.0, 'C+': 2.5, 'C0': 2.0, 'D+': 1.5, 'D0': 1.0, 'F': 0.0}

score_sum = 0
score_class = 0
for line in sys.stdin:
    s = line.split()
    if s[2] == 'P':
        continue
    score_class += float(s[1]) * score_board[s[2]]
    score_sum += float(s[1])
    
print(score_class / score_sum)