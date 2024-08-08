#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;
    int temp = a, cnt = 1;
    if (b > 0)
        while (1)
        {
            if (temp == c)
            {
                cout << cnt;
                break;
            }

            if (temp > c)
            {
                cout << "X";
                break;
            }
            temp += b;
            cnt++;
        }
    else
    {
        while (1)
        {
            if (temp == c)
            {
                cout << cnt;
                break;
            }
            if (temp < c)
            {
                cout << "X";
                break;
            }
            temp += b;
            cnt++;
        }
    }
}
