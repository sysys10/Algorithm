#include <bits/stdc++.h>
using namespace std;

void solve()
{
    double a, b;
    cin >> a >> b;
    a * (100 - b) / 100 >= 100
        ? cout << 0
        : cout << 1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
