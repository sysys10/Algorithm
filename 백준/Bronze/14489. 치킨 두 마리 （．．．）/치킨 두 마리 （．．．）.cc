#include <bits/stdc++.h>
using namespace std;

void solve()
{

    long long a, b, c;
    cin >> a >> b >> c;
    if (a + b - 2 * c >= 0)
        cout << a + b - 2 * c << endl;
    else
        cout << a + b << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
