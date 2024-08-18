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
    n = 1;
    for (int i = t - 3; i < t; i++)
    {
        n *= i;
    }
    for (int i = 1; i <= 3; i++)
    {
        n /= i;
    }

    cout << n;
}

int main()
{
    solve();
}