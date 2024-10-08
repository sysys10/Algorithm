#include <bits/stdc++.h>
using namespace std;
#define INF 987654321
int n, m, k;
int st[3], et[3], sTotal, eTotal, ans;

void solve()
{
    scanf("%d:%d:%d", st, st + 1, st + 2);
    scanf("%d:%d:%d", et, et + 1, et + 2);
    sTotal = st[0] * 3600 + st[1] * 60 + st[2];
    eTotal = et[0] * 3600 + et[1] * 60 + et[2];
    if (sTotal >= eTotal)
        eTotal += 24 * 3600;
    ans = eTotal - sTotal;
    printf("%02d:%02d:%02d", ans / 3600, (ans % 3600) / 60, ans % 60);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
