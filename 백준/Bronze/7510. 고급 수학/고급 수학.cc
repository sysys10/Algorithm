#include <bits/stdc++.h>
using namespace std;
#define INF 987654321
void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        if (a[2] * a[2] == (a[0] * a[0] + a[1] * a[1]))
        {
            flag = true;
        }
        flag ? cout << "Scenario #" << i + 1 << ":" << endl
                    << "yes\n\n"
             : cout << "Scenario #" << i + 1 << ":" << endl
                    << "no\n\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
