import sys
input = sys.stdin.readline

def CountN(nListLine: list[str], target: str):
    print(nListLine.count(target))

def solve():
    try:
        line1 = input().strip()
        if not line1: return
        n = int(line1)

        nListLine = input().split()
        
        target = input().strip()
        if not target: return

        CountN(nListLine, target)
    except (ValueError, EOFError):
        pass

if __name__ == "__main__":
    solve()
