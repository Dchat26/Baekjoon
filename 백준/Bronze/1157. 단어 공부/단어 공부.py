from collections import Counter
import sys
input = sys.stdin.readline

    
def solve():
    s = input().rstrip().upper()
    if not s: return
    
    cnt = Counter(s).most_common()
    
    if len(cnt) > 1 and cnt[0][1] == cnt[1][1]:
        print("?")
    else:
        print(cnt[0][0])
    
if __name__ == "__main__":
    solve()
