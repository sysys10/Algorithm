n = int(input())
for _ in range(n):
    sentence = input().rstrip()
    if not sentence.endswith('.'):
        sentence += '.'
    print(sentence)