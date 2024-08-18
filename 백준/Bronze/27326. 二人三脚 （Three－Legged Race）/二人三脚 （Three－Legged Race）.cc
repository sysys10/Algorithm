#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, sum = 0;
    cin >> n;
    sum = n * (n + 1);
    for (int i = 1; i < n * 2; i++)
    {
        int x;
        cin >> x;
        sum -= x;
    }
    cout << sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}