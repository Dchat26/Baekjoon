import sys

input = sys.stdin.readline
write = sys.stdout.write

def recursion(s: str, l: int, r: int, count: list[int]):
    count[0] += 1
    
    if l >= r: return 1
    elif s[l] != s[r]: return 0
    else: return recursion(s, l + 1, r - 1, count)
    
def isPalindrome(s: str):
    count_list = [0]
    result = recursion(s, 0, len(s) - 1, count_list)
    return result, count_list[0]

def solve():
    n = int(input().rstrip())
    if 1 > n or n > 1000: return
    
    result = []
    for _ in range(n):
        s = input().rstrip()
        if not s: continue
   
        result.append(isPalindrome(s))
        
    write("\n".join(f"{res} {cnt}" for res, cnt in result) + "\n")
            
if __name__ == "__main__":
    solve()