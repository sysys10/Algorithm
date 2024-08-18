#include <bits/stdc++.h>
using namespace std;
vector<long long> v(100001);

void solve()
{

    int a, b;
    int sum = 0, d = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> a >> b;
        sum -= a;
        sum += b;
        if (sum > d)
            d = sum;
    }
    cout << d;
}

int main()
{
    solve();
}