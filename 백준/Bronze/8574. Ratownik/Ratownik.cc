#include <bits/stdc++.h>
using namespace std;

vector<string> v;

void solve()
{
   
    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, x, y;
    string str, s;
    cin >> t >> k >> x >> y;
    while (t--)
    {
        cin >> n >> m;
        if (k * k < pow((n - x), 2) + pow((m - y), 2))
            cnt++;
    }
    cout << cnt;
}

int main()
{
    solve();
}