#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a <= 50 && b <= 10)
    {
        cout << "White";
        return 0;
    }
    else if (b > 30)
    {
        cout << "Red";
        return 0;
    }
    else
    {
        cout << "Yellow";
        return 0;
    }
}