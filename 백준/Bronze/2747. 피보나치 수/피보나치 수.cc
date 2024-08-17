#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int dp[n + 1] = {0};
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 0; i < n - 1; i++)
    {
        dp[i + 2] = dp[i] + dp[i + 1];
    }
    cout << dp[n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}