#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;
    for (int i = 0; i < str.length() - 1; i++)
    {
        if (i == 0 || str[i - 1] == '-')
        {
            cout << str[i];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}