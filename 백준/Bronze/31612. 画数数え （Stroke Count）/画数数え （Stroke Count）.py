N = int(input())
S = input()

stroke_count = 0
for char in S:
    if char == 'j':
        stroke_count += 2
    elif char == 'o':
        stroke_count += 1
    elif char == 'i':
        stroke_count += 2

print(stroke_count)