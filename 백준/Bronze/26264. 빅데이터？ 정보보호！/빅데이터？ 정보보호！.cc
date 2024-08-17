#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, scnt = 0, bcnt = 0;
    cin >> n;
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 's')
        {
            scnt++;
        }
        if (str[i] == 'b')
            bcnt++;
    }
    (scnt > bcnt) ? cout << "security!" : (scnt < bcnt) ? cout << "bigdata?"
                                                        : cout << "bigdata? security!";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}