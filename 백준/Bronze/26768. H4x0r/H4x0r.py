hacker_dict = {'a': '4', 'e': '3', 'i': '1', 'o': '0', 's': '5'}

text = input().strip()
hacker_text = ''.join(hacker_dict.get(char, char) for char in text)

print(hacker_text)