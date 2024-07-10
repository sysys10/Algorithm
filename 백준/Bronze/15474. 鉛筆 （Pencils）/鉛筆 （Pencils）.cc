#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N, A, B, C, D;
    cin >> N >> A >> B >> C >> D;
    int result = min((B * (N / A + ( N % A != 0))), D * ( N / C + ( N % C != 0)));
    cout << result << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
