#include <bits/stdc++.h>
using namespace std;
#define INF 987654321
int n, m, k;

void solve()
{

    int a, b;
    cin >> n >> m >> a >> b;
    bool flag1 = false, flag2 = false;
    while (!flag1 && !flag2)
    {
        m -= a;
        b -= n;
        if (m <= 0)
        {
            flag1 = true;
        }
        if (b <= 0)
        {
            flag2 = true;
        }

        if (flag1 && flag2)
        {
            cout << "DRAW";
            return;
        }
        else if (flag1)
        {
            cout << "PLAYER B";
            return;
        }
        else if (flag2)
        {
            cout << "PLAYER A";
            return;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
