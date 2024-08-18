#include <bits/stdc++.h>
using namespace std;

vector<string> v;

void solve()
{
    int t;
    long long n, m, k = 0, sum = 0, cnt = 0;
    double a, b, c, d, e, f = 0;
    bool flag = false;
    string str, s;
    cin >> t;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i + j == t)
                cnt++;
        }
    }
    cout << cnt;
}

int main()
{
    solve();
}