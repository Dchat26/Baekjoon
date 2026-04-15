import sys

input = sys.stdin.readline
write = sys.stdout.write

def solve():
    color = {"black" : "0", "brown" : "1", "red" : "2", "orange" : "3", "yellow" : "4",
             "green" : "5", "blue" : "6", "violet" : "7", "grey" : "8", "white" : "9"}
    
    resultStr = color[input().rstrip()] + color[input().rstrip()]
    resultStr += "0" * int(color[input().rstrip()])
    
    result = int(resultStr)
    
    write(str(result) + "\n")
    
if __name__ == "__main__":
    solve()
