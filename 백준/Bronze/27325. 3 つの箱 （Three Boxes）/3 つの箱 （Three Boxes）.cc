#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int ans = 0, cur = 1;
    int a;
    string str;
    cin >> a >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'L')
        {
            if (cur > 1)
                cur--;
        }
        else
        {
            if (cur < 3)
                cur++;
            if (cur == 3)
                ans++;
        }
    }
    cout << ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}