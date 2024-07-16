#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a;
    cin >> a;
    int temp = a % 2;
    if (temp == 1 || temp==-1)
    {
        cout << a << " is odd\n";
    }
    else
        cout << a << " is even\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}