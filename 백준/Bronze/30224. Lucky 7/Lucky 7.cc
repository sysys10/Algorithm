#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    bool q = a % 7;
    bool w;
    string str = to_string(a);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '7'){
            w = true;
            break;
        }
        else
            w = false;
    }
    !q && !w ? cout << 1 : !q && w ? cout << 3
                       : q && !w   ? cout << 0
                                   : cout << 2;
}