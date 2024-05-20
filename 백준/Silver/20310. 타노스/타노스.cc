#include <bits/stdc++.h>
using namespace std;
char str[501];

int main()
{
    cin >> str;
    int cnt1 = 0;
    int cnt0 = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '1')
        {
            cnt1++;
        }
        else
        {
            cnt0++;
        }
    }
    cnt1 /= 2;
    cnt0 /= 2;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '1')
        {
            if (cnt1 <= 0)
            {
                cout << 1;
            }
            else
            {
                cnt1--;
            }
        }
        if (str[i] == '0')
        {
            if (cnt0 > 0)
            {
                cnt0--;
                cout << 0;
            }
        }
    }

    // for(int i=0;i<cnt0/2;i++){
    //     cout<<0;
    // }
    // for(int i=0;i<cnt1/2;i++){
    //     cout<<1;
    // }
}