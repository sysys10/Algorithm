#include <bits/stdc++.h>
using namespace std;
vector<long long> v(100001);

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        for (int i = 0; i < b; i++)
        {
            for (int j = 0; j < a; j++)
            {
                cout << "X";
            }
            cout << endl;
        }
        cout << endl;
    }
}

int main()
{
    solve();
}