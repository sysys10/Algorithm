#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    int sum=0;
    int dp[1001]={0};
    for(int i=0;i<n;i++){
        dp[i]=1;
        
        for(int j=0;j<i;j++){
            if(v[i]>v[j]){
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
    sum=max(sum,dp[i]);
    }
    cout << sum;
}
