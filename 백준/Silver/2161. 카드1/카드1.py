from collections import deque
q = deque([])

n = int(input())

for i in range(1,n+1):
    q.append(i)

for i in range(n):
    print(q[0],end=' ')    
    q.popleft()
    if(len(q)==0):
        break
    q.append(q[0])
    q.popleft()