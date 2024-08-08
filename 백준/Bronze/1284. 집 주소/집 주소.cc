#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    while (1)
    {
        int sum = 2;
        cin >> str;
        if (str == "0")
            break;
        sum += str.length() - 1;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '1')
            {
                sum += 2;
            }
            else if (str[i] == '0')
                sum += 4;
            else
                sum += 3;
        }
        cout << sum << '\n';
    }

    return 0;
}