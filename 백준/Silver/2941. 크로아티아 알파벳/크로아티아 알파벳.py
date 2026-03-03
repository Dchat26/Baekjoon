import sys
input = sys.stdin.readline

def solve():
    s = input().rstrip()
    if not s: return
    
    alp = ['c=', 'c-', 'd-', 'lj', 'nj', 's=', 'dz=', 'z=']
    
    for i in alp:
        if i in s:
            s = s.replace(i, '*')
            
    print(len(s))
    
if __name__ == "__main__":
    solve()
