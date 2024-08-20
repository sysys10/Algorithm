#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, max = 0;
    string str, s;
    int min = 1e6;
    cin >> n;

    for (long long i = n;; i++)
    {
        m = i;
        sum = 0;
        while (m > 0)
        {
            sum += m % 10;
            m /= 10;
        }
        if (i % sum == 0)
        {
            cout << i;
            break;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}