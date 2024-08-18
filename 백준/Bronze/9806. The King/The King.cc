#include <bits/stdc++.h>
using namespace std;

vector<long long> v;

void solve()
{
     int t;
    long long n, m, k = 0, sum = 0, cnt = 0, max = 0;
    string str, s;
    int min = 1e6;
    cin >> t;
    cin >> n;
    for (int i = 0; i < t; i++)
    {
        cin >> m;
        if (pow(m, n) > 0)
            sum += pow(m, n);
    }
    cout << sum;

}

int main()
{
    solve();
}