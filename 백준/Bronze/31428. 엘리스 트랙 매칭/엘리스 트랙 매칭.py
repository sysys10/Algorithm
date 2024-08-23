
arr = [0]*26

n = int(input())

inp = list(input().split())

for c in inp:
    arr[ord(c)-ord('A')]+=1

print(arr[ord(input())-ord('A')])