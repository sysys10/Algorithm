import sys
import math
input = sys.stdin.readline

a = int(input())

arr = list(map(int,input().split()))
t,p = map(int,input().split())
ans1 = 0 
sum = 0

for i in range(6):
    ans1 += math.ceil(arr[i]/t)
    sum += arr[i]

print(ans1)
print(sum // p,sum%p)