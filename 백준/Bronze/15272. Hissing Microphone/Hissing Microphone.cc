#include <bits/stdc++.h>
using namespace std;

vector<long long> v(100001);
void solve()
{
    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, max = 0;
    string str, s;
    int min = 1e6;
    cin >> str;
    for (int i = 0; i < str.length() - 1; i++)
    {
        if (str[i] == str[i + 1] && str[i + 1] == 's')
        {
            cout << "hiss";
            return;
        }
    }
    cout << "no hiss";
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}