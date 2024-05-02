#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long dp[1002];

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;
    dp[4] = 5;

    int i = 5;
    while (1)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
        dp[i]%=10007;
        if (i > n)
        {
            break;
        }
        i++;
    }
    cout << dp[n];
}