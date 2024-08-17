#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<string> str;
    string a;

    for (int i = 0; i < 3; i++)
    {
        cin >> a;
        str.push_back(a);
    }
    int n = 0;
    int cnt = 0;
    for (int i = 0; i < 3; i++)
    {
        if (str[i].compare("Fizz") != 0 && (str[i].compare("FizzBuzz") != 0&&str[i].compare("Buzz") != 0))
        {
            n = stoi(str[i]);
            cnt = i;
        }
    }
    bool flag3 = false, flag5 = false;
    int next = n + (3 - cnt);
    if (next % 3 == 0)
        flag3 = true;

    if (next % 5 == 0)
        flag5 = true;

    (flag3 && flag5) ? cout << "FizzBuzz" : (flag3 && !flag5) ? cout << "Fizz"
                                        : (!flag3 && flag5)   ? cout << "Buzz"
                                                              : cout << next;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}