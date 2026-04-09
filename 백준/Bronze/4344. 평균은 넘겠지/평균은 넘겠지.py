import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
    n = int(input().rstrip())
    if not n: return
    
    result = []
    for _ in range(n):
        slist = list(map(int, input().split()))
        
        num_students = slist[0]
        scores = slist[1:] 
        
        avg = sum(scores) / num_students
        
        above_avg_count = 0
        for score in scores:
            if score > avg:
                above_avg_count += 1
                
        rate = round(((above_avg_count / num_students) * 100), 3)
        
        result.append(str(rate) + "%")
        
    write("\n".join(result) + "\n")
        
if __name__ == "__main__":
    solve()