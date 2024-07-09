#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N, P, ans, arr[4]{0};
    cin >> N >> P;
    if (N >= 5)
        arr[0] = 500;
    if (N >= 10)
        arr[1] = P * 0.1;
    if (N >= 15)
        arr[2] = 2000;
    if (N >= 20)
        arr[3] = P * 0.25;
    ans = *max_element(arr, arr + 4);
    ans = P - ans;
    if (ans < 0)
        ans = 0;
    cout << ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
