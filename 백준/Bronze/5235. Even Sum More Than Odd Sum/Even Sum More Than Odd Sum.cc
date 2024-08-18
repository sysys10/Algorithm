#include <bits/stdc++.h>
using namespace std;

vector<string> v;

void solve()
{

    int t;
    long long n, m, k = 0, sum = 0, cnt = 0, oSum;
    string str, s;
    cin >> t;
    while (t--)
    {
        sum = 0;
        oSum = 0;
        cin >> n;
        while (n--)
        {
            cin >> m;
            if (m % 2 == 0)
            {
                sum += m;
            }
            else
                oSum += m;
        }
        if (sum > oSum)
            cout << "EVEN\n";
        else if (sum < oSum)
            cout << "ODD\n";
        else
            cout << "TIE\n";
    }
}

int main()
{
    solve();
}