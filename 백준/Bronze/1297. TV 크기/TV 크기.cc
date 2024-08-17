#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << (int)(a / sqrt(b * b + c * c) * b) << ' ' << (int)(a / sqrt(b * b + c * c) * c);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}