import sys

input = sys.stdin.readline
write = sys.stdout.write

def sovle():
    n = int(input().rstrip())
    s = input().rstrip()
    if not n or not s: return
    
    write(str(s.swapcase()) + "\n")
    
if __name__ == "__main__":
    sovle()