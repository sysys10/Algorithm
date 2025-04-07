#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct shark
{

    int r, c, d, s, z;
    bool flag = true;
};

bool comp(shark a, shark b)
{
    return a.z > b.z;
}
void solve()
{
    int R, C, M, sum = 0;
    cin >> R >> C >> M;
    shark sharks[M];

    for (int i = 0; i < M; i++)
    {
        cin >> sharks[i].r >> sharks[i].c >> sharks[i].s >> sharks[i].d >> sharks[i].z;
    }
    sort(sharks, sharks + M, comp);

    int x = 0, temp;
    int board[R+1][C+1]={0};
    while (x < C)
    {   
        x++;
        for(int i=1;i<R+1;i++){
            for(int j=1;j<C+1;j++){
                board[i][j] = 0;
            }
        }
        
        int highest = R + 1;
        for (int i = 0; i < M; i++)
        {
            if (sharks[i].flag==true && sharks[i].c == x)
            {
                highest = min(sharks[i].r, highest);
            }
        }

        for (int i = 0; i < M; i++)
        {
            if (sharks[i].flag ==true && highest == sharks[i].r && sharks[i].c == x)
            {
                sum += sharks[i].z;
                sharks[i].flag = false;
                break;
            }
        }

        for (int i = 0; i < M; i++)
        {
            if (sharks[i].flag == true)
            {
                switch (sharks[i].d)
                {
                case 1:
                {
                    sharks[i].r = (sharks[i].r - sharks[i].s);
                    if (sharks[i].r <= 1)
                    {
                        temp = 1 - sharks[i].r;
                        if (((temp) / (R - 1)) % 2 == 0)
                        {
                            sharks[i].r = 1 + temp % (R - 1);
                            sharks[i].d = 2;
                        }
                        else
                        {
                            sharks[i].r = R - temp % (R - 1);
                        }
                    }
                    break;
                }
                case 2:
                {
                    sharks[i].r = (sharks[i].r + sharks[i].s);
                    if (sharks[i].r >= R)
                    {
                        temp = sharks[i].r - R;
                        if (((temp) / (R - 1)) % 2 == 0)
                        {
                            sharks[i].r = R - temp % (R - 1);
                            sharks[i].d = 1;
                        }
                        else
                        {
                            sharks[i].r = 1 + temp % (R - 1);
                        }
                    }
                    break;
                }
                case 3:
                {
                    sharks[i].c = (sharks[i].c + sharks[i].s);

                    if (sharks[i].c >= C)

                    {

                        temp = sharks[i].c - C;

                        if (((temp) / (C - 1)) % 2 == 0)
                        {
                            sharks[i].c = C - temp % (C - 1);
                            sharks[i].d = 4;
                        }
                        else

                        {
                            sharks[i].c = 1 + temp % (C - 1);
                        }
                    }
                    break;
                }

                case 4:
                {
                    sharks[i].c = (sharks[i].c - sharks[i].s);
                    if (sharks[i].c <= 1){
                        
                        temp = 1 - sharks[i].c;

                        if (((temp) / (C - 1)) % 2 == 0)
                        {
                            sharks[i].c = 1 + temp % (C - 1);
                            sharks[i].d = 3;
                        }
                        else
                        {
                            sharks[i].c = C - temp % (C - 1);
                        }
                    }
                    break;
                }
                }
                 board[sharks[i].r][sharks[i].c]++;

                if (board[sharks[i].r][sharks[i].c] >= 2){
                    sharks[i].flag = false;
                }
                
            }
           
        }
     
    }
    cout << sum;
}
int main()
{
    solve();
    return 0;
}