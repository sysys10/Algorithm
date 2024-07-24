#include <bits/stdc++.h>
using namespace std;
#define INF 987654321

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string a, b, c, d;

    cin >> a >> b >> c >> d;

    long long q = stoll(a.append(b)) + stoll(c.append(d));
    cout << q ;
}
