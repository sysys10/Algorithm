def count_votes(votes):
    result = ""
    groups = votes // 5
    remainder = votes % 5
    
    result += "++++ " * groups
    result += "|" * remainder
    
    return result.rstrip()

T = int(input().strip())

for _ in range(T):
    n = int(input().strip())
    print(count_votes(n))