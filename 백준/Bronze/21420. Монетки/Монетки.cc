#include <bits/stdc++.h>
using namespace std;
#define INF 987654321
void solve()
{
    int t, acnt = 0, bcnt = 0;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        a ? acnt++ : bcnt++;
    }
    cout << min(acnt, bcnt);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
