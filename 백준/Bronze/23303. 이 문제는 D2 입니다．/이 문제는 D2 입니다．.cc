#include <bits/stdc++.h>
using namespace std;
#define INF 987654321
void solve()
{
    string str;
    getline(cin, str);
    if (str.find("d2") != string::npos || str.find("D2") != string::npos)
        cout << "D2";
    else
        cout << "unrated";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
