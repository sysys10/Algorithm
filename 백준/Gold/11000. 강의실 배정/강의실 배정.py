import heapq

n = int(input())
meetings = []

for _ in range(n):
    start, end = map(int, input().split())
    meetings.append((start, end))

meetings.sort()  # 시작 시간 기준으로 정렬

pq = []
heapq.heappush(pq, meetings[0][1])  # 첫 회의의 종료 시간을 힙에 추가

for i in range(1, n):
    if pq[0] <= meetings[i][0]:  # 현재 회의실 중 가장 빨리 끝나는 시간이 다음 회의 시작 시간보다 작거나 같으면
        heapq.heappop(pq)  # 그 회의실을 사용할 수 있으므로 pop
    heapq.heappush(pq, meetings[i][1])  # 현재 회의의 종료 시간을 힙에 추가

print(len(pq))  # 필요한 회의실의 개수 출력