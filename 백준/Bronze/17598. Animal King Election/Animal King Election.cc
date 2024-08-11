#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a = 0, b = 0;
    while (1)
    {
        string str;
        cin >> str;
        if (str.compare("Tiger") == 0)
        {
            a++;
        }
        else if (str.compare("Lion") == 0)
            b++;
        if (cin.eof() == 1)
            break;
    }
    if (a > b)
    {
        cout << "Tiger";
    }
    else
        cout << "Lion";
}
