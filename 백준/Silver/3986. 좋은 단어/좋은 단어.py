n = int(input())
ans = 0

for _ in range(n):
    stack = []
    L = list(input())
    for i in L:
        if not len(stack):
            stack.append(i)
        elif stack[-1] == i:
            stack.pop(-1)
        else:
            stack.append(i)

    if not len(stack):
        ans += 1 

print(ans)