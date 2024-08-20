#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, max = 0, c, p;
    string str, s;

    cin >> t;
    while (t--)
    {
        cnt = 0;
        cin >> n >> m;
        while (m--)
        {
            cin >> k;
            if (k > n)
                cnt++;
        }
        cout << cnt << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}