import sys

input = sys.stdin.readline
write = sys.stdout.write

# def fib(num, fibcount):
#     # if num == 1 or num == 2: 
#     #     fibcount[0] += 1
        
#     #     return 1
#     # else: return fib(num - 1, fibcount) + fib(num - 2, fibcount)
    
# def fibonacci(num, fibocount):
#     f = [0] * (num + 1)
#     f[1] = f[2] = 1
    
#     for i in range(3, num + 1):
#         fibocount[0] += 1
#         f[i] = f[i - 1] + f[i - 2]
        
#     return f[num]

def main():
    n = int(input())
    if not n: return
    
    # fibcount = [0]
    # fibocount = [0]
    
    # fib(n, fibcount)
    # fibonacci(n, fibocount)
    
    f = [0] * (n + 1)
    f[1] = f[2] = 1
    
    for i in range(3, n + 1):
        f[i] = f[i - 1] + f[i - 2]
    
    write(f"{f[n]} {n - 2}\n")
    
if __name__ == "__main__":
    main()