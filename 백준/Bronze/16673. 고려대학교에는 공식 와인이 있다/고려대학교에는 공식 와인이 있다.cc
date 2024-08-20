#include <bits/stdc++.h>
using namespace std;

vector<long long> v(100001);
void solve()
{

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, max = 0;
    string str, s;
    int min = 1e6;
    cin >> n >> m >> k;

    for (int i = 1; i <= n; i++)
    {
        sum += i * m + i * i * k;
    }
    cout << sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}