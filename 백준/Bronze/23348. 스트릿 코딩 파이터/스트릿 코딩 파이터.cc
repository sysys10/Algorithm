#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    int n;
    cin >> n;
    int ans = 0;
    while (n--)
    {
        int sum = 0;
        for (int i = 0; i < 9; i++)
        {
            int k;
            cin >> k;
            sum += a[i % 3] * k;
        }
        ans = max(sum, ans);
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}