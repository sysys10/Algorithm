#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n = 1;
    while (cin >> n)
    {
        if (n == 0)
            break;
        int a;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            v.push_back(a);
        }
        int cnt = 0;
        for (int i = 0; i < v.size() - 3; i++)
        {
            if ((v[i] == 2 && v[i + 1] == 0) && (v[i + 2] == 2 && v[i + 3] == 0))
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}