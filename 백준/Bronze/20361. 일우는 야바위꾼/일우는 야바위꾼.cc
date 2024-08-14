#include <bits/stdc++.h>
using namespace std;
#define INF 987654321
int n, m, k;

void solve()
{
    cin >> n >> m >> k;
    for (int i = 0; i < k;i++){
        int a, b;
        cin >> a >> b;

        if(a==m){
            m = b;
        }else if(b==m){
            m = a;
        }
    }
    cout << m;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
