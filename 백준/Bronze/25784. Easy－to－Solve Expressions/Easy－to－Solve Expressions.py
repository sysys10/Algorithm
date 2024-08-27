li = list(map(int,input().split()))
li.sort()
res = 3
if li[0]+li[1] == li[2] : res = 1
elif li[0] * li[1] == li[2] : res = 2
print(res)