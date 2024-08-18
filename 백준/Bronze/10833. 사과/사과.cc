#include <bits/stdc++.h>
using namespace std;

int gcd(int n, int m, int cnt)
{
    int r, temp;

    while (n != m)
    {
        temp = max(n, m);
        m = min(n, m);
        n = temp;

        n = n - m;
        cnt++;
    }
    return cnt;
}
void solve()
{
    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, max = 0;
    string str, s;
    int min = 1e6;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        sum += m % n;
    }
    cout << sum;
}

int main()
{
    solve();
}