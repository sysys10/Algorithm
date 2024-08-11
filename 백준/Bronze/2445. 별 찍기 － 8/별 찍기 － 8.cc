#include <bits/stdc++.h>
using namespace std;
int n;
void printg(int i, int d)
{
    for (int i = 0; i < n * d; i++)
    {
        cout << "*";
    }
}
void printb(int i, int d)
{
    for (int i = 0; i < n * d; i++)
    {
        cout << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int a = 0; a < i; a++)
        {
            cout << "*";
        }
        for (int a = 0; a < n - i; a++)
        {
            cout << ' ';
        }
        for (int a = 0; a < n - i; a++)
        {
            cout << ' ';
        }
        for (int a = 0; a < i; a++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int a = 0; a < i; a++)
        {
            cout << "*";
        }
        for (int a = 0; a < n - i; a++)
        {
            cout << ' ';
        }
        for (int a = 0; a < n - i; a++)
        {
            cout << ' ';
        }
        for (int a = 0; a < i; a++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
