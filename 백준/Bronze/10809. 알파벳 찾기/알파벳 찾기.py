s = input()
arr = [-1]*26
for idx in range(len(s)):
    num = ord(s[idx]) - ord('a')
    if arr[num] == -1:
        arr[num] = idx 

print(*arr)