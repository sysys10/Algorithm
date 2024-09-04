n = int(input())

for _ in range(n):
   c, p = map(int, input().split())
   print(f"{c} {p}")
   if c == 1:
       cost = p
   else:
       cost = p + (c - 1) * (p - 2)
   print(cost)