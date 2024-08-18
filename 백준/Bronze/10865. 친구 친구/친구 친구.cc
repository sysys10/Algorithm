#include <bits/stdc++.h>
using namespace std;
vector<long long> v(100001);

void solve()
{
    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, max = 0;
    string str, s;
    int min = 1e6;
    cin >> k >> t;
    while (t--)
    {
        cin >> n >> m;
        v[n]++;
        v[m]++;
    }
    for (int i = 1; i <= k; i++)
    {
        cout << v[i] << '\n';
    }
}

int main()
{
    solve();
}