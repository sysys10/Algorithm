#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for (int a = 0; a < n; a++)
    {
        for (int i = 0; i < n * 3; i++)
        {
            cout << "@";
        }
        for (int i = 0; i < n; i++)
        {
            cout << ' ';
        }
        for (int i = 0; i < n; i++)
        {
            cout << "@";
        }
        cout << endl;
    }
    for (int a = 0; a < 3 * n; a++)
    {
        for (int i = 0; i < n; i++)
            cout << '@';

        for (int i = 0; i < n; i++)
            cout << ' ';

        for (int i = 0; i < n; i++)
            cout << '@';
        for (int i = 0; i < n; i++)
            cout << ' ';

        for (int i = 0; i < n; i++)
            cout << "@";
        cout << endl;
    }
    for (int a = 0; a < n; a++)
    {

        for (int i = 0; i < n; i++)
        {
            cout << "@";
        }
        for (int i = 0; i < n; i++)
        {
            cout << ' ';
        }
        for (int i = 0; i < n * 3; i++)
        {
            cout << '@';
        }
        cout << endl;
    }
}