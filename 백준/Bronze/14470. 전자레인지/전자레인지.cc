#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    a < 0 ? cout << (a*-1) * c + d + b * e : cout << (b - a) * e;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
