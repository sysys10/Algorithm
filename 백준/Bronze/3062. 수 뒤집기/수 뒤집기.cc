#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        int q = stoi(a);
        reverse(a.begin(), a.end());
        q += stoi(a);
        a = to_string(q);
        bool flag = true;
        for (int i = 0; i < a.length() / 2; i++)
            if (a[i] != a[a.length() - 1 - i])
                flag = false;
        flag ? cout << "YES\n" : cout << "NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}