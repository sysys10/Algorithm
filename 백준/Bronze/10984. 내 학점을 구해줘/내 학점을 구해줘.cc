#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, max = 0, c, p;
    string str, s;
    double a, b = 0;

    cin >> t;
    while (t--)
    {
        cin >> n;
        b = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> m >> a;
            sum += m;
            b += m * a;
        }
        cout << fixed;
        cout.precision(1);
        cout << sum << ' ' << b / sum << '\n';
    }
}

int main()
{
    solve();
}