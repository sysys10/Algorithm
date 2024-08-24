A,B,C = map(int,input().split())

if (A == 0 and B == 0 and C ==0) or (A == 1 and B == 1 and C == 1):
    print("*")

if (A == 1 and B == 0 and C ==0) or (A == 0 and B == 1 and C == 1):
    print("A")

if (A == 0 and B == 1 and C ==0) or (A == 1 and B == 0 and C == 1):
    print("B")

if (A == 0 and B == 0 and C == 1) or (A == 1 and B == 1 and C == 0):
    print("C")