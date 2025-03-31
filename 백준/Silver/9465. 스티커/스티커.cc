#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n][2];
    for (int i = 0; i < n; i++)
        cin >> arr[i][0];

    for (int i = 0; i < n; i++)
        cin >> arr[i][1];

    int dp[n][2];
    dp[0][0] = arr[0][0];
    dp[0][1] = arr[0][1];
    int MAX = max(dp[0][0], dp[0][1]);
    for (int i = 1; i < n; i++)
    {
        if (i == 1)
        {
            dp[i][0] = arr[0][1] + arr[1][0];
            dp[i][1] = arr[0][0] + arr[1][1];
        }
        else
        {

            dp[i][0] = arr[i][0] + max(dp[i - 2][1], dp[i - 1][1]);
            dp[i][1] = arr[i][1] + max(dp[i - 2][0], dp[i - 1][0]);
        }
        MAX = max(dp[i][0], max(MAX, dp[i][1]));
    }
    cout << MAX << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
}