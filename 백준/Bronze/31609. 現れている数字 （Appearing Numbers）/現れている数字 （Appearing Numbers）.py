N = int(input())
A = list(map(int, input().split()))

unique_numbers = sorted(set(A))

for num in unique_numbers:
    print(num)