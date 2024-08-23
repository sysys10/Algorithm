import sys
T=int(input())
for _ in range(T):
    a,b = map(int,sys.stdin.readline().split())
    bmi = b/((a/100)**2)
    if(a>=204):
        ans = 4
    elif(a>=161):
        if(bmi>=35 or bmi<16):
            ans = 4
        elif(bmi>=20 and bmi<25):
            ans = 1
        elif(20>bmi>=18.5 or 30>bmi>=25):
            ans = 2
        elif(18.5>bmi>=16.0 or 35>bmi>=30):
            ans = 3
    elif(a>=159):
        if(35>bmi>=16):
            ans = 3
        else:
            ans = 4
    elif(a>=146):
        ans = 4
    elif(a>=140.1):
        ans = 5
    else:
        ans = 6
    print(ans)
