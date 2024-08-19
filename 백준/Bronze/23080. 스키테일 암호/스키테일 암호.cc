#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    int n;
    cin >> n >> str;

    for (int i = 0; i < str.length() ; i=  i + n){
        cout << str[i];
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}