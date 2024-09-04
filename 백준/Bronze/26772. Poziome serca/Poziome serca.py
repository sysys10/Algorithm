def heart():
    return [
        " @@@   @@@ ",
        "@   @ @   @",
        "@    @    @",
        "@         @",
        " @       @ ",
        "  @     @  ",
        "   @   @   ",
        "    @ @    ",
        "     @     "
    ]

n = int(input())
h = heart()

for line in range(9):
    print((h[line] + " ") * n)