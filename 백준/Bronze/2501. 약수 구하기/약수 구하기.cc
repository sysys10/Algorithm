#include <stdio.h>

int main()
{
    int n, k,count=0;
    scanf("%d %d", &n, &k);

    int ans[10001];

    for (int i = 1; i <= n; i++)
    {
        if (n%i == 0)
        {
            ans[++count]=i;
        }
    }

    printf("%d", ans[k]);

}
