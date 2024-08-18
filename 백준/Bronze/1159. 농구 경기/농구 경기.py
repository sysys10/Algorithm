import math
t = int(input())
arr = [0]*26
for _ in range (t):
    a = input()
    arr[ord(a[0])-ord('a')]+=1

d = ''
for i in range(26):
    if arr[i] >= 5:
        d+=chr(i+ord('a'))

if d!='':
    print(d)
else: print("PREDAJA")