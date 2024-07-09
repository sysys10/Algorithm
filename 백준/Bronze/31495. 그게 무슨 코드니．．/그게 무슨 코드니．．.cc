#include <bits/stdc++.h>
using namespace std;

int SEA_LEVEL = 100;
void solve()
{
    string str;
    getline(cin, str);
    if(str.length()>2&&(str.front()=='\"'&&str.back()=='\"')){
        for (int i = 1; i < str.length() - 1;i++){
            cout << str[i];
        }
    }else
        cout << "CE";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
