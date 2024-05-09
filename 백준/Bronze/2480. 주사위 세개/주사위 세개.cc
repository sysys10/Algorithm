#include <stdio.h>
int main()
{

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && a == c)
        printf("%d", a * 1000 + 10000);

    if (a == b && a != c)
        printf("%d", 1000 + a * 100);

    if (b == c && b != a)
        printf("%d", 1000 + b * 100);

    if (c == a && c != b)
        printf("%d", 1000 + c * 100);

    if (a != b && a != c && c != b)
    {
        if (a > b && a > c)
            printf("%d", a * 100);

        if (b > a && b > c)
            printf("%d", b * 100);

        if (c > a && c > b)
            printf("%d", c * 100);
    }
}