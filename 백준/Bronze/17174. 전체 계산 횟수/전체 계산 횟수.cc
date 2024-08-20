#include <bits/stdc++.h>
using namespace std;

vector<long long> v(100001);
void solve()
{
    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, max = 0;
    string str, s;
    int min = 1e6;
    cin >> n >> m;
    sum += n;
    while (n / m > 0)
    {
        sum += n / m;
        n /= m;
    }
    cout << sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}