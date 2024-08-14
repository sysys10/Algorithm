#include <bits/stdc++.h>
using namespace std;
#define INF 987654321
int n, m, k;
void solve()
{
    int a, b;
    cin >> a >> b;
    for (int i = 1; i <= a * b; i++)
    {
        cout << i;
        if (i % b == 0)
        {
            cout << endl;
        }
        else
            cout << ' ';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
