#include <bits/stdc++.h>
using namespace std;

vector<long long> v;

void solve()
{
    
    int t;
    long long n, m, k = 0, sum = 0, cnt = 0;
    double a, b, c, d, e, f = 0;
    bool flag = false;
    string str, s;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'I' || str[i] == 'O' || str[i] == 'S' || str[i] == 'H' || str[i] == 'Z' || str[i] == 'X' || str[i] == 'N')
            cnt++;
    }
    if (cnt == str.length())
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    solve();
}