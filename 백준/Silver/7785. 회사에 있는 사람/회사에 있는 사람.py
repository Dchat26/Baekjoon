import sys
input = sys.stdin.readline
write = sys.stdout.write

def solve():
    n = int(input().rstrip())
    if not n: return
    
    name = {}
    for _ in range(n):
        line = input().split()
        if not line: return
        nname, state = line
        
        if state == "enter":
            name[nname] = True
        else:
            if nname in name:
                del name[nname]
                
    name = sorted(name.keys(), reverse=True)
    
    write("\n".join(name) + "\n")
    
if __name__ == "__main__":
    solve()