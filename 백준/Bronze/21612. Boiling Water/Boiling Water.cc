#include <bits/stdc++.h>
using namespace std;

int SEA_LEVEL = 100;
void solve()
{
    int B;
    cin >> B;
    int P = 5 * B - 400;
    cout << P << "\n";
    if (P < SEA_LEVEL)
        cout << 1 << '\n';
    else if (P > SEA_LEVEL)
        cout << -1 << "\n";

    else
        cout << 0 << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
