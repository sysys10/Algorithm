n = int(input())

cnt = 0
for i in range(1,n+1):
    if i % 5 == 0:
        temp = i
        while temp % 5 == 0:
            cnt += 1
            temp //= 5

print(cnt)