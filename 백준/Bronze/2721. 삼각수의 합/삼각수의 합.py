N=int(input())
for _ in range(N):
    a=int(input())
    ans=0
    for i in range(1,a+1):
        ans+=i*(i+1)*(i+2)/2
    print(int(ans))