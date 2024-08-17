import sys
input = sys.stdin.readline

for _ in range(3) :
    a = int(input())
    sum = 0
    for j in range(a):
        sum += int(input())
    if sum > 0:
        print('+')
    elif sum==0:
        print('0')
    else : print('-')
