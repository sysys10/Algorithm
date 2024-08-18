#include <bits/stdc++.h>
using namespace std;

vector<long long> v;

void solve()
{

   
    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, max = 0;
    string str, s;
    int min = 1e6;

    cin >> n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> m >> s;
        sum += m;
        if (sum >= 210)
            continue;
        if (s == "T")
        {
            n++;
        }
        if (n > 8)
            n -= 8;
    }
    cout << n;

}

int main()
{
    solve();
}