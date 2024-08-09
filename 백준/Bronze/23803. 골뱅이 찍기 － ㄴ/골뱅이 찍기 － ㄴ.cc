#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < 5 * n - n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "@";
        }
        cout << endl;
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n * 5; i++)
            cout << "@";
        cout << endl;
    }

    return 0;
}