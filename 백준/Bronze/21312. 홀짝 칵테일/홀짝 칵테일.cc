#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a[3];
    cin >> a[0] >> a[1] >> a[2];

    vector<int> odd;
    for (int i = 0; i < 3;i++){
        if(a[i]%2==1){
            odd.push_back(a[i]);
        }
    }
    int sum = 1;
    for (int i = 0; i < odd.size();i++){
        sum *= odd[i];
    }
    if(odd.size()==0){
        cout << a[0] * a[1] * a[2];
    }else
        cout << sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}