n = int(input())
arr = list(map(int,input().split()))

arr.sort()
cnt = 0

for x in range(1,n+1):
    cnt += sum(arr[0:x])

print(cnt)