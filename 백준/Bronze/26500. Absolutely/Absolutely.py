n = int(input())
for _ in range(n):
    a, b = map(float, input().split())
    distance = abs(a - b)
    print(f"{distance:.1f}")