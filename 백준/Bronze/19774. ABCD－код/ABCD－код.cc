#include <bits/stdc++.h>
using namespace std;
#define INF 987654321
void solve()
{

    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        int ap = a / 100;
        int dwe = a % 100;

        int newI = ap * ap + dwe * dwe;

        if(newI % 7 ==1){
            cout << "YES\n";
        }else
            cout << "NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
