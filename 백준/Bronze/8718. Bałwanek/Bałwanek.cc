#include <bits/stdc++.h>
using namespace std;

vector<long long> v;

void solve()
{
    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, max = 0;
    string str, s;
    cin >> t >> k;

    v.push_back(7000 * k);
    v.push_back(3500 * k);
    v.push_back(1750 * k);

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] <= 1000 * t)
        {
            cout << v[i];
            return;
        }
    }
    cout << 0;
}

int main()
{
    solve();
}