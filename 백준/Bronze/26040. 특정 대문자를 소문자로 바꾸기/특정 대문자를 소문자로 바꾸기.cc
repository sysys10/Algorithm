#include <bits/stdc++.h>
using namespace std;

void solve()
{

    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    int arr[100] = {0};
    for (int i = 0; i < str2.length(); i++)
    {
        if (str2[i] != ' ')
        {
            arr[str2[i] - 'A']++;
        }
    }

    for (int i = 0; i < str1.length(); i++)
    {
        if (arr[str1[i] - 'A'] == 0)
        {
            cout << str1[i];
        }
        else
            cout << (char)(str1[i] - 'A' + 'a');
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}