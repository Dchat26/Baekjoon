import sys

def solve():
    stdin_read = sys.stdin.read
    stdout_write = sys.stdout.write

    try:
        input_data = stdin_read().split()
        if not input_data:
            return
        
        results = []
        for i in range(0, len(input_data), 2):
            a = int(input_data[i])
            b = int(input_data[i+1])
            results.append(str(a + b))
        
        stdout_write("\n".join(results) + "\n")
    except EOFError:
        pass

if __name__ == "__main__":
    solve()
