while True:
    li = list(map(int,input().split()))
    if li[0] == 0:
        break
    result = 1
    for i in range (li[0]):
        result *= li[2*i + 1]
        result -= li[2*i + 2]
    print(result) 
