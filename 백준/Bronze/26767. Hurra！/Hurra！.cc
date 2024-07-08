#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 7 == 0 && i % 11 == 0)
            cout << "Wiwat!\n";
        else if (i % 7 == 0)
            cout << "Hurra!\n";
        else if (i % 11 == 0)
            cout << "Super!\n";
        else
            cout << i << "\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
