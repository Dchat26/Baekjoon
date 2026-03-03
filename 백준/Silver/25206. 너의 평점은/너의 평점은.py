import sys
input = sys.stdin.read

def solve():
    data = input().split()
    if not data: return
    
    score_board = {'A+' : 4.5, 'A0' : 4.0, 'B+' : 3.5, 'B0' : 3.0,
                   'C+' : 2.5, 'C0' : 2.0, 'D+' : 1.5, 'D0' : 1.0, 'F' : 0.0}
    
    score_sum = 0
    score_class = 0
    for i in range(0, len(data), 3):
        if data[i+2] == 'P':
            continue
        
        score_sum += float(data[i+1])
        score_class += float(data[i+1]) * score_board[data[i+2]]
    
    print(score_class / score_sum)

if __name__ == "__main__":
    solve()
