#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int sum = 0, cnt[1000] = {0};
    for (int i = 0; i < 10; i++)
    {
        int n;
        cin >> n;
        cnt[n]++;
        sum += n;
    }
    pair<int, int> MAX = {0, 0};
    for (int i = 0; i < 1000; i++)
    {
        if (cnt[i] > MAX.first)
        {
            MAX.first = max(cnt[i], MAX.first);
            MAX.second = i;
        }
    }
    cout << sum / 10 << endl
         << MAX.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}