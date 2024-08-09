#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;

    cout << "@";
    for (int i = 0; i < n; i++)
    {
        cout << "@";
    }
    cout << "@\n@";
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << " ";
        }
        cout << "@\n@";
    }
    cout << "@";
    for (int i = 0; i < n ; i++)
    {
        cout << "@";
    }
    return 0;
}