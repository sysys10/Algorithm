#include <bits/stdc++.h>
using namespace std;
#define INF 987654321
int n, m, k;
void solve()
{
    cin >> n;
    vector<char> v;
    int scnt = 0, tcnt = 0;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        v.push_back(c);
        if (c == 's')
            scnt++;
        else
            tcnt++;
    }
    int a = 0;
    while (scnt!=tcnt)
    {
        if (v[a] == 's')
            scnt--;
        else
            tcnt--;
        a++;
    }
    for (int i = a; i < v.size(); i++)
        cout << v[i];
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
