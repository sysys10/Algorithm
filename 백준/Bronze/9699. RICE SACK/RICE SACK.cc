#include <bits/stdc++.h>
using namespace std;

int SEA_LEVEL = 100;
void solve()
{
    int t, ans;

    cin >> t;
    for (int i = 1; i <= t; i++, ans = 0)
    {
        for (int i = 0, x; i < 5; i++)
            cin >> x, ans = max(ans, x);
        printf("Case #%d: %d\n", i, ans);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
