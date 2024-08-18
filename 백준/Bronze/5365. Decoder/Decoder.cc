#include <bits/stdc++.h>
using namespace std;

void solve(){
    
  
    int t;
    long long n, m, k = 0, sum = 0, cnt = 0;
    double a, b, c, d, e, f = 0;
    bool flag = false;
    string str, s;

    cin >> t >> str;
    t--;
    s = str;
    cout << str[0];
    while (t--)
    {
        cin >> str;
        if (str.length() >= s.length())
            cout << str[s.length() - 1];
        else cout << ' ';
        s = str;
    }


}

int main()
{
    solve();
}