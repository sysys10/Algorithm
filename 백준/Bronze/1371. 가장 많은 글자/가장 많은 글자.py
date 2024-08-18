import sys

s = sys.stdin.read()
li = [0]*100

for c in s:
    if c >= 'a' and c<='z':
        temp = ord(c)-ord('a')
        li[temp]+=1

ans = ''
MAX = max(li)
for i in range(26):
    if li[i]==MAX:
        ans += chr(i+ord('a'))

print(ans)