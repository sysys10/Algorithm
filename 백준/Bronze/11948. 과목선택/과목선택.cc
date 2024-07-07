#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a[6];
    for (int i = 0; i < 6;i++)
        cin >> a[i];

    int sum1 = 0,sum2=0;
    for (int i = 0; i < 4;i++){
        sum1 += a[i];
    }
    sum1 -= min(a[0],min(a[1],min(a[2],a[3])));
    for (int i = 0; i < 2;i++){
        sum2 += a[i + 4];
    }
    sum2 -= min(a[4], a[5]);
    cout << sum1 + sum2;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}