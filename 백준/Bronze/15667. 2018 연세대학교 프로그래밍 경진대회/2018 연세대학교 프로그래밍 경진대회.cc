#include <iostream>
#include <algorithm>
using namespace std;

int a[3];
int c[3];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    t -= 1;
    for (int i = 1; i < 10000; i++)
    {
        if (i + i * i == t)
        {
            cout << i;
            break;
        }
    }
}