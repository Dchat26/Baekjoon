import sys

def solve():
    for line in sys.stdin:
        if not line: return
        n = int(line.rstrip())
        if n == -1: return
        
        nsum = 0
        nlist = []
        for i in range(1, n):
            if n % i == 0:
                nsum += i
                nlist.append(i)
        
        if n == nsum:
            print(n, "= ", end="")
            print(" + ".join(map(str, nlist)))
        else:
            print(n, "is NOT perfect.")
            
if __name__ == "__main__":
    solve()
