#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for (int i = 0; i < a; i++)
        for (int s = 0; s < a; s++)
        {
            if (c == (i * b + s) % a && d == (i * c + s) % a)
            {
                cout << i <<' '<< s;
                return;
            }
        }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}