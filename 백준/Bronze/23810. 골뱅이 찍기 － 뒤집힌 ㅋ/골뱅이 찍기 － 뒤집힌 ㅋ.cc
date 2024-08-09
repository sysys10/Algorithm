#include <bits/stdc++.h>
using namespace std;
int n;
void printg(int i, int d)
{
    for (int i = 0; i < n * d; i++)
    {
        cout << "@";
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

    for (int i = 0; i < n; i++)
    {
        printg(1, 5);
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        printg(1, 1);
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {

        printg(1, 5);
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        printg(1, 1);
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        printg(1, 1);
        cout << endl;
    }
}
