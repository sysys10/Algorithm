#include <bits/stdc++.h>
using namespace std;

vector<string> v;

void solve()
{

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, oSum = 0;
    string str, s;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        if (n > m)
            sum++;
        else if (n < m)
            oSum++;
    }
    cout << sum << ' ' << oSum;
}

int main()
{
    solve();
}