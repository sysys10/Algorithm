#include <iostream>
#include <algorithm>
using namespace std;

int a[3];
int c[3];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int one, two;
    int X, Y;
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
        a[i] *= 100;
    }
    sort(a, a + 3);

    for (int i = 0; i < 3; i++)
        cin >> c[i];
    if (c[1] > c[2])
        swap(c[1], c[2]);

    one = (a[0] + a[1] + a[2]) * (100 - c[0]) / 100;
    two = a[0] + a[1] * (100 - c[1]) / 100 + a[2] * (100 - c[2]) / 100;

    if (one < two)
    {
        cout << "one ", one = (a[0] + a[1] + a[2]) - one;
        X = one / 100, Y = one % 100;
    }
    else
    {
        cout << "two ", two = (a[0] + a[1] + a[2]) - two;
        X = two / 100, Y = two % 100;
    }

    cout << X << '.';
    if (Y < 10)
        cout << 0;
    cout << Y;
}