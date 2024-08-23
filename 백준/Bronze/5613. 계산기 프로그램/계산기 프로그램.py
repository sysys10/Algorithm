import math
a = int(input())
ans = a
while True:
    d = input()
    if d == '=':
        break
    a = int(input())    
    if d =='+':
        ans += a
    if d =='-':
        ans -= a
    if d =='*':
        ans *= a
    if d =='/':
        ans /= a
        ans = math.floor(ans)

print(ans)

