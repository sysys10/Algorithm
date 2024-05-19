#include <stdio.h>
#include <stdlib.h>
int arr[5002];
int compare(const void *first, const void *second)
{
    return (*(int *)first  - *(int *)second);
}
int main()
{
    int K;
    int sum = 0;
    int N;
    int cnt = 0;
    scanf("%d %d", &N, &K);
    int j = N - 1;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int i = 0;
    qsort(arr,N,4,compare); 
    while (i < j)
    {
        sum = arr[i] + arr[j];
        if (sum <= K)
        {
            cnt++;
            j--;
            i++;
        }
        else
        {
            j--;
        }
    }
    printf("%d", cnt);
    return 0;
}