import sys
from collections import deque
input = sys.stdin.readline
write = sys.stdout.write

def solve():
    result = []
    while True:
        s = input().rstrip('\n')
        if not len(s) <= 100: break
        
        if s == '.':
            break
        
        Q = deque()
        is_TF = True
        for i in s:
            if i == '(' or i == '[':
                Q.append(i)
            elif i == ')':
                if Q and Q[-1] == '(':
                    Q.pop()
                else: 
                    is_TF = False
                    break
            elif i == ']':
                if Q and Q[-1] == '[':
                    Q.pop()
                else:
                    is_TF = False
                    break
        
        if is_TF and not Q:
            result.append("yes")
        else:
            result.append("no")
            
    write("\n".join(result) + "\n")
                        
if __name__ == "__main__":
    solve()