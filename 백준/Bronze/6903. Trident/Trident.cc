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
    cin >> t >> n >> k;
    for (int j = 0; j < t; j++)
    {
        cnt = 0;
        while (1)
        {
            cout << "*";
            cnt++;
            if (cnt == 3)
                break;
            for (int i = 0; i < n; i++)
            {
                cout << ' ';
            }
        }
        cout << '\n';
    }
    for (int i = 0; i < 2 * n + 3; i++)
    {
        cout << "*";
    }
    cout << '\n';
    for (int j = 0; j < k; j++)
    {
        for (int i = 0; i < 2 * n + 3; i++)
        {
            if (i == n + 1)
            {
                cout << "*";
                break;
            }
            else
                cout << ' ';
        }
        cout << '\n';
    }
}

int main()
{
    solve();
}