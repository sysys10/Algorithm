#include <stdio.h>

int main()
{
    int n, count5 = 0;
    scanf("%d", &n);

    for (int i = n; i > 4; i--)
    {
        if (i % 5 == 0)
        {
            int temp = i;
            count5++;
            for (int j = n; j >= 1; j--)
            {
                while (temp/5 == j && j % 5 == 0)
                {
                    count5++;
                    temp /= 5;
                }
            }
        }
    }
    printf("%d", count5);
}
