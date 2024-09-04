w, h = map(int, input().split())
n, a, b = map(int, input().split())

if a > w or b > h:
   print(-1)
else:
   letters_per_row = w // a
   letters_per_column = h // b
   letters_per_page = letters_per_row * letters_per_column
   
   if letters_per_page == 0:
       print(-1)
   else:
       pages = (n + letters_per_page - 1) // letters_per_page
       print(pages)