#include <bits/stdc++.h>
using namespace std;
#define INF 987654321
int n, m, k;
void solve()
{
    while(cin>>n){
        if(n==0){
            return;
        }
        priority_queue<int> pq;
        int sum = 0;
        for (int i = 0; i < n;i++){
            int a;
            cin >> a;
            int temp = sum + a;

            if(temp<=300){
                sum = temp;
            }
        }
        cout << sum << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
