#include <bits/stdc++.h>
using namespace std;
#define INF 987654321
int n, m, k;

void solve()
{
    cin >> n;
    bool flag = false;
    for (int i = 0; i < n;i++){
        string str;
        cin >> str;
        if(str.compare("anj")==0){
            flag = true;
        }
    }
    if(flag){
        cout << "뭐야;";
    }else
        cout << "뭐야?";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
