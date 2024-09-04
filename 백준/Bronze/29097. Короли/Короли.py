n, m, k, a, b, c = map(int, input().split())

joffrey = n * a
robb = m * b
stannis = k * c

max_army = max(joffrey, robb, stannis)

kings = []
if joffrey == max_army:
   kings.append("Joffrey")
if robb == max_army:
   kings.append("Robb")
if stannis == max_army:
   kings.append("Stannis")

print(" ".join(kings))