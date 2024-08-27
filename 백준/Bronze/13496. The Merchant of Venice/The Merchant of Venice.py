def f(n, s, d, a):
   b = 0
   for i in range(n):
       if a[i][0] / s <= d:
           b += a[i][1]
   return b

k = int(input())
for i in range(1, k+1):
   n, s, d = map(int, input().split())
   a = [list(map(int, input().split())) for _ in range(n)]
   c = f(n, s, d, a)
   print(f"Data Set {i}:")
   print(c)
   print()