base_rate, additional_rate = map(int, input().split())
n = int(input())

for _ in range(n):
    consumption = int(input())
    if consumption <= 1000:
        charges = consumption * base_rate
    else:
        charges = 1000 * base_rate + (consumption - 1000) * additional_rate
    print(f"{consumption} {charges}")