#include <bits/stdc++.h>
using namespace std;

vector<long long> v;

void solve()
{
    int t;
    long long n, m, k = 0, sum = 0, cnt = 0;
    double a, b, c, d, e, f = 0;
    bool flag = false;
    string str, s;

    while (1)
    {
        cin >> str;
        k = 0;
        if (str == "0")
            break;
        for (int i = 0; i < str.length(); i++)
        {
            k += str[i] - '0';
        }
        while (1)
        {
            sum = 0;
            while (k > 0)
            {
                sum += k % 10;
                k /= 10;
            }
            k = sum;
            if ((k / 10) == 0)
            {
                cout << k << '\n';
                break;
            }
        }
    }
}

int main()
{
    solve();
}