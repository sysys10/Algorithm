#include <bits/stdc++.h>
using namespace std;

vector<long long> v;

void solve()
{

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0;
    double a, b, c, d, e, f = 0;
    bool flag = false;
    string str, s;

    cin >> t;
    for (int i = 1; i <= 500; i++)
    {
        v.push_back(i * i);
    }
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (v[i] == v[j] + t)
                cnt++;
        }
    }

    cout << cnt;
}

int main()
{
    solve();
}