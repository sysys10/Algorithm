for i in range(int(input())):
    arr = []
    a = list(map(int, input().split()))
    for i in a:
        if i % 2 == 0:
            arr.append(i)
    print(sum(arr), min(arr))