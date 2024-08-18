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
    for (int i = 0; i < t; i++)
    {
        cin >> s;
        v.push_back(s);
    }
    for (int i = 0; i < t; i++)
    {
        cin >> s;
        if (v[i] == s)
            cnt++;
    }

    cout << cnt;
}

int main()
{
    solve();
}