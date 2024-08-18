#include <bits/stdc++.h>
using namespace std;

vector<long long> v(20001);

void solve()
{
    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, max = 0;
    string str, s;
    int min = 1e6;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        v[n] = i;
    }
    for (int i = 1; i <= t; i++)
    {
        cout << v[i] << '\n';
    }
}

int main()
{
    solve();
}