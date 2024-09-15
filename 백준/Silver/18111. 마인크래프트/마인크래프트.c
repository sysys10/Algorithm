#include <stdio.h>

int main()
{

    int arr[500][500] = {'\0'};
    int n, m, b, block, time, sum = 0, hight=0, lowest = 256, highest = 0, flag = 1;
    scanf("%d%d%d", &n, &m, &block);

    b = block;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
            int num = arr[i][j];
            sum += num;   // 블록 개수의 총합
            if (num > highest)
                highest = num; // 제일 높은 블록
            if (num < lowest)
                lowest = num; // 제일 낮은 블록
        }
    }

    int mintime = sum * 2; // 다 파낸다고 생각했을 떄 최댓값

    for (int a = lowest; a <= highest; a++)
    {
        b=block;
        flag = 1;
        time = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int num = arr[i][j];

                if (num > a)
                {
                    b = b + (num - a); // 차이, num이 더 크면 파내야하므로 2초
                    time += 2 * (num - a);
                }
                    if (num < a)
                {
                    b = b - (a - num);
                    time += (a - num);
                }
            }
        }
        if (b < 0)
        {
            flag = 0;
        }

        if (time <= mintime && flag != 0) //같으면 a(높이)더 높은 걸로
        {
            mintime = time;
            hight = a;
        }
    }

    printf("%d %d", mintime, hight);
}