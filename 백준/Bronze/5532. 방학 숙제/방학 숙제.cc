#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l;

    float a, b, c, d;
    cin >> l >> a >> b >> c >> d;
    int Math = ceil(b / d);
    int Word = ceil(a / c);

    cout << l - max(Math, Word);
}