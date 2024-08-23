def is_good_year(N):
    last_two_digits = N % 100
    return (N + 1) % last_two_digits == 0
T = int(input())

for _ in range(T):
    N = int(input())
    
    if is_good_year(N):
        print("Good")
    else:
        print("Bye")