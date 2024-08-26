for _ in range(int(input())):
    arr = []
    for __ in range(int(input())):
        li = list(input().split())
        arr.append(li)
    arr.sort( key = lambda x: int(x[1]),reverse=True )
    print(arr[0][0])
