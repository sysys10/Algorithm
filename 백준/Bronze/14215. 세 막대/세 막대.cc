#include <bits/stdc++.h>
using namespace std;
#define INF 987654321
void solve()
{
    int a[3];
    for (int i = 0; i < 3; i++)
        cin >> a[i];

    sort(a, a + 3);
    if (a[2] >= a[0] + a[1])
    {
        cout << 2 * (a[0] + a[1]) - 1;
    }
    else
        cout << a[1] + a[0] + a[2];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
