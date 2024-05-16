#include <bits/stdc++.h>
using namespace std;
int m, n, j;
vector<int> apple;
int main()
{
    cin >> n >> m >> j;
    for (int i = 0; i < j; i++)
    {
        int a;
        cin >> a;
        apple.push_back(a);
    }
    int left = 1;
    int right = m ;
    int cnt = 0;
    for (int i = 0; i < apple.size(); i++)
    {
        if (apple[i] < left)
        {
            int dist = left - apple[i];
            cnt += dist;
            left = apple[i];
            right -= dist;
        }
        else if (apple[i] > right)
        {
            int dist = apple[i]-right;
            cnt += dist;
            left += dist;
            right = apple[i];
        }
    }
    cout<<cnt;
}