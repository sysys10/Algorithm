#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    map<int,int> m;

    while(n--){
        string str;
        cin >> str;
        m.insert({str[0] - 'a', 0});
    }
    if(m.size()==1)
        cout << 1;else
        cout << 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}