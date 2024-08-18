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
    cin >> t >> n;

    for (int j = 1; j <= n; j++)
    {
        long long A = -6 * pow(j, 4) + t * pow(j, 3) + 2 * pow(j, 2) + j;
        if (A <= 0)
        {
            cout << "The balloon first touches ground at hour: " << j;
            break;
        }
        if (j == n)
            cout << "The balloon does not touch ground in the given time.";
    }
}

int main()
{
    solve();
}