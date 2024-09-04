n, m = map(int, input().split())

if n > m:
   n, m = m, n

if n == m:
   print(2 * n)
else:
   print(2 * n + 1)