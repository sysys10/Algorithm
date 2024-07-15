#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int l, r;

    cin >> l >> r;
    if (l != r)
        cout << "Odd " << max(l, r) * 2;
    else if (!l && !r)
        cout << "Not a moose";
    else
        cout << "Even " << l * 2;
}

int main()
{
    solve();
}