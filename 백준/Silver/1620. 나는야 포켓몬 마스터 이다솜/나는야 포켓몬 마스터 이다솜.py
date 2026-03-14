import sys
input = sys.stdin.readline
write = sys.stdout.write

def solve():
    line = input().split()
    if not line: return
    m, n = map(int, line)
    
    name_to_id = {} 
    id_to_name = [""] * (m + 1)
    
    for i in range(1, m + 1):
        pokemon = input().rstrip()
        name_to_id[pokemon] = i
        id_to_name[i] = pokemon
        
    result = []
    for _ in range(n):
        query = input().rstrip()
        if query.isdigit():
            result.append(id_to_name[int(query)])
        else:
            result.append(str(name_to_id[query]))
            
    write("\n".join(result) + "\n")

if __name__ == "__main__":
    solve()