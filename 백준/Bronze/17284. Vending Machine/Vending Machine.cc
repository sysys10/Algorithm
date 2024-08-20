#include <bits/stdc++.h>
using namespace std;

vector<long long> v(100001);
void solve()
{
    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, max = 0;
    string str, s;
    int min = 1e6;
    sum = 5000;
    while (cin >> n)
    {
        if (n == 1)
            sum -= 500;
        else if (n == 2)
            sum -= 800;
        else
            sum -= 1000;
    }
    cout << sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}