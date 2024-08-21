s = input()
ans = 0

if(s[0]=='A'):
    ans = 4
    if(s[1]=='+'):
        ans += 0.3
    elif(s[1]=='0'):
        ans += 0.0
    elif(s[1]=='-'):
        ans -= 0.3
elif(s[0]=='B'):
    ans = 3
    if(s[1]=='+'):
        ans += 0.3
    elif(s[1]=='0'):
        ans += 0.0
    elif(s[1]=='-'):
        ans -= 0.3

elif(s[0]=='C'):

    ans = 2
    if(s[1]=='+'):
        ans += 0.3
    elif(s[1]=='0'):
        ans += 0.0
    elif(s[1]=='-'):
        ans -= 0.3

elif(s[0]=='D'):
    
    ans = 1
    if(s[1]=='+'):
        ans += 0.3
    elif(s[1]=='0'):
        ans += 0.0
    elif(s[1]=='-'):
        ans -= 0.3
else:
    ans = 0.0

print(ans)