#include <bits/stdc++.h>
using namespace std;
#define INF 987654321
int n, m, k;
void solve()
{
    cin >> n >> m;
    vector<int> v;
    int t = n;
    while (t--)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int i = 0;
    while (1)
    {
        if (v[i % n] < m++)
            break;
        i++;
    }
    cout << (i) % n + 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
