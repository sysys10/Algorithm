#include <bits/stdc++.h>
using namespace std;

int dp[102][100001];
int w[102];
int v[102];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, K;
    cin >> N >> K;

    for (int i = 1; i <= N; i++)
        cin >> w[i] >> v[i];

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= K; j++)
        {
            if (j >= w[i])
            {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
            }
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    cout << dp[N][K];
}