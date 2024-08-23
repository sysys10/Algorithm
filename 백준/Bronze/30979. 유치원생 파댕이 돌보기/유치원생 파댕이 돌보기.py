T = int(input().strip())
N = int(input().strip())
candies = list(map(int, input().strip().split()))

total_quiet_time = sum(candies)

if total_quiet_time >= T:
    print("Padaeng_i Happy")
else:
    print("Padaeng_i Cry")