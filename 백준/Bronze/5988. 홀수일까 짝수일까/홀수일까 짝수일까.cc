#include <bits/stdc++.h>
using namespace std;

vector<string> v;

void solve()
{
    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, oSum = 0;
    string str, s;
    cin >> t;
    while (t--)
    {
        cin >> str;
        if ((str[str.length() - 1] - '0') % 2 == 0)
            cout << "even\n";
        else
            cout << "odd\n";
    }
}

int main()
{
    solve();
}