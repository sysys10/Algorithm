for _ in range(int(input())):
    cnt = 0 
    for c in input():
        if c == 'D':
            break
        else: cnt+=1
    print(cnt)