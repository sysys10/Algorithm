
peoples = []
ans = []
n = int(input())
for _ in range(n):
    a1,b1 = map(int,input().split())
    peoples.append([a1,b1])
for i in range(n):
    grade = 1

    for j in range(n):
    
        if i != j:
            if peoples[i][0] < peoples[j][0] and peoples[i][1] < peoples[j][1]:
                grade+=1
    ans.append(grade)

print(*ans,sep=' ')
