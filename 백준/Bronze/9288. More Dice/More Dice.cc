#include <bits/stdc++.h>
using namespace std;

vector<long long> v(20001);

void solve()
{

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, max = 0;
    string str, s;
    int min = 1e6;
    cin >> t;
    for (int k = 1; k <= t; k++)
    {
        cin >> n;
        cout << "Case " << k << ":\n";
        for (int i = 6; i > 0; i--)
        {
            for (int j = 1; j <= i; j++)
            {
                if (i + j == n)
                    cout << "(" << j << "," << i << ")\n";
            }
        }
    }
}

int main()
{
    solve();
}