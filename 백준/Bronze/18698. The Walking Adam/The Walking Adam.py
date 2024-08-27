for _ in range(int(input())):
    s = input()
    cnt = 0 
    for c in s:
        if c == 'D':
            break
        else: cnt+=1
    print(cnt)