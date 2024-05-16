#include <bits/stdc++.h>
using namespace std;
int m, n, j;
vector<int> apple;
int main()
{
    cin >> n >> m >> j;
     int left = 1;
    int right = m ;
    int cnt = 0;
    for (int i = 0; i < j; i++)
    {
        int a;
        cin >> a;
        if (a < left)
        {
            int dist = left - a;
            cnt += dist;
            left = a;
            right -= dist;
        }
        else if (a > right)
        {
            int dist = a-right;
            cnt += dist;
            left += dist;
            right = a;
        }
    }
    cout<<cnt;
}