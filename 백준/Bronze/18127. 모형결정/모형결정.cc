#include <bits/stdc++.h>
using namespace std;
#define INF 987654321
int n, m, k;

void solve()
{
    long long a, b;

    cin >> a >> b;

    long long minCristal = ((b + 1) * (2 + b * (a - 2))) / 2;
    cout << minCristal << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
