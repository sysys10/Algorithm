#include <bits/stdc++.h>
using namespace std;
#define INF 987654321

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int a[5];
        for (auto &i : a)
        {
            cin >> i;
        }
        sort(a, a + 5,greater<int>());
        int ans = 0;
        if (a[1] - a[3] < 4)
        {
            ans = (a[1] + a[2] + a[3]);
        }
        if(!ans){
            cout << "KIN\n"; 
        }
        else
            cout << ans << '\n';
    }
}
