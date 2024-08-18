#include <bits/stdc++.h>
using namespace std;
int fac(int num)
{
    int a = 1;
    for (int i = 1; i <= num; i++)
        a *= i;
    return a;
}

void solve()
{
    while (1)
    {
        int a;
        cin >> a;
        if (a == 0)
            break;
        int sum = 0;
        int tmp = a;
        int i = 1;
        while (tmp)
        {
            sum += tmp % 10 * fac(i);
            tmp /= 10;
            i++;
        }
        cout << sum << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}