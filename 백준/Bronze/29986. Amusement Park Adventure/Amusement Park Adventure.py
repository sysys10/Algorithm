N, H = map(int, input().split())
ride_heights = list(map(int, input().split()))

eligible_rides = sum(1 for height in ride_heights if H >= height)

print(eligible_rides)