

while True:
    s = input()
    if s == ".":
        break
    cnt = 0
    arr = []
    flag = False
    for c in s:
        if c == '(':
            arr.append('(')
        if c == '[':
            arr.append('[')
        if c == ')':
            if arr and arr[-1] == '(':
                arr.pop()
            else:
                flag = True
                break
        if c ==']':
            if arr and arr[-1] == '[':
                arr.pop()
            else:
                flag = True
                break
    if arr == [] and flag == False:
        print("yes")
    else: print("no")