import sys
input = sys.stdin.readline
write = sys.stdout.write

def is_TF(num: int):
    if num < 2: return False
    if num == 2 or num == 3: return True
    if num % 2 == 0 or num % 3 == 0: return False
    
    for i in range(5, int(num ** 0.5) + 1, 2):
        if num % i == 0:
            return False
    return True

def solve():
    n = int(input().rstrip())
    if not n: return
    
    result = []
    for _ in range(n):
        line = input().rstrip()
        if not line: break
        
        num = int(line)
        
        if num <= 2:
            result.append("2")
            continue
        
        if num == 3:
            result.append("3")
            continue
        
        target = num
        while True:
            if is_TF(target):
                result.append(str(target))
                break
            
            target += 1
    
    write("\n".join(result) + "\n")
    
if __name__ == "__main__":
    solve()