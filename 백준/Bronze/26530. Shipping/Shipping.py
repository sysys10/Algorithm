n = int(input())
for _ in range(n):
    total = 0
    x = int(input())
    for _ in range(x):
        _, quantity, price = input().split()
        total += int(quantity) * float(price)
    print(f"${total:.2f}")