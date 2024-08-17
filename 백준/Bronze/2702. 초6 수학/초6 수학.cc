#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << lcm(a, b) << ' ' << gcd(a, b) << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}