#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, h, v;

    cin >> n >> h >> v;

    int result = max({h * v, h * (n - v), (n - h) * v, (n - h) * (n - v)}) * 4;

    cout << result << "\n";
}

int main()
{
    solve();
}