#include <bits/stdc++.h>
using namespace std;

int SEA_LEVEL = 100;
void solve()
{

    int price = 250;
    double a, b, s;

    cin >> s >> a >> b;
    if (s <= a)
        cout << price;
    else
        cout << price + 100 * ceil((s - a) / b);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
