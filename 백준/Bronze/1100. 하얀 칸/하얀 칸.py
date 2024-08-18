cnt = 0
for i in range(8):
    a = input()
    for j in range(len(a)):
        if(i%2==0):
            if(j%2==0 and a[j]=='F'):
                cnt+=1
        else:
            if(j%2==1 and a[j]=='F'):
                cnt+=1
print(cnt)