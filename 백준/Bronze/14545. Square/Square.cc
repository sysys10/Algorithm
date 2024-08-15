#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    while (n--)
    {
        long long a;
        cin >> a;
        cout << a * (a + 1) * (2 * a + 1) / 6 << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}