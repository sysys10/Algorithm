a,b = map(int,input().split())
M = max(a,b)
gcd = 0
for n in range(M,0,-1):
    if a%n ==0 and b%n == 0:
        gcd = n
        break
print(gcd)
print(a*b//gcd)