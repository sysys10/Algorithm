#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for (int i = 1; i <= v[n - 1]; i++)
    {
        bool flag = 1;
        for (int a = 0; a < n; a++)
        {
            if (v[a] % i != 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << i << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}