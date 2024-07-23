#include <bits/stdc++.h>
using namespace std;
#define INF 987654321

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    string ans;
    while (n--)
    {
        string str;
        cin >> str;
        if(find(str.begin(),str.end(),'S')!=str.end()){
            ans = str;
        }
    }
    cout << ans;
}
