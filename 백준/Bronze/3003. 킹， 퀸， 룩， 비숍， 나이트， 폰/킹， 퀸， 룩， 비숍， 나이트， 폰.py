import sys
input = sys.stdin.readline

def check_p(plist: list[int], piece: list[int]):
    result = []
    for i in range(6):
        result.append(piece[i] - plist[i])
        
    print(*result)
        
def solve():
    line = input().split()
    if not line: return
    
    plist = list(map(int, line))
    piece = [1, 1, 2, 2, 2, 8]
    
    check_p(plist, piece)
    
if __name__ == "__main__":
    solve()
