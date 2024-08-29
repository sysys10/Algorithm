
from collections import deque

n = int(input())
m = int(input())


def BFS(arr):
    visited = [0 for _ in range(n+1)]
    q = deque()
    q.append(1)
    visited[1] = 1
    cnt = 0
    while q:
        cur = q.popleft()
        for i in range(1,n+1):
            if arr[cur][i] == 1 and visited[i] == 0:
                q.append(i)
                cnt += 1
                visited[i] = 1
    return cnt

arr = [[0 for _ in range(n+1)] for __ in range(n+1)]

for _ in range(m):
    a,b = map(int,input().split())
    arr[a][b] = 1
    arr[b][a] = 1

ans = BFS(arr)

print(ans)
