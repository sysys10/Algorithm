#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int arr[201][201];

    vector<long long> v;
    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, max = 0;
    string str, s;

    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> m;
            sum += m / k;
        }

        cout << sum << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}