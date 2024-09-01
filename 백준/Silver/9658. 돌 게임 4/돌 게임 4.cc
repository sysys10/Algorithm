#include <stdio.h>

int main()
{
    int n;
    int win[1001] = {0}; // 1이면 상근, 0이면 창영
    scanf("%d", &n);
    
    win[1] = 0;
    win[2] = 1;
    win[3] = 0;
    win[4] = 1;
    win[5] = 1;
    for (int i = 6; i <= n; i++)
    {
        if (win[i - 1] == 0 || win[i - 3] == 0 || win[i - 4] == 0)
        {
            win[i] = 1;
        }
        else
            win[i] = 0;
    }

    if (win[n] != 0)
    {
        printf("SK");
    }
    else
        printf("CY");
}