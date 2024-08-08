#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> v;
    int cnt = 0;
    while(1){
        int a;
        cin >> a;
        if(cin.eof()==1)
            break;
            if(a>0)
                cnt++;
    }
    cout << cnt;
}
