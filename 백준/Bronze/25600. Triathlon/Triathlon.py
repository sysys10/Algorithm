MAX = 0
cnt = 0
for _ in range(int(input())) :
    a, d, g = map(int, input().split())
    if a == d + g :
        cnt = a * (d + g) * 2
    else :
        cnt = a * (d + g)
    MAX = max(cnt, MAX)

print(MAX)