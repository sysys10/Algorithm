#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, x, y;
    cin >> a >> b;
    if (a < b)
        cout << "-1";
    else
    {
        x = (a + b) / 2;
        y = (a - b) / 2;
        if (x + y == a && x - y == b)
            cout << x << " " << y;
        else
            cout << "-1";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
