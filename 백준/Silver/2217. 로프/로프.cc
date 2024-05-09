#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> roap;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        roap.push_back(a);
    }
    int result;
    priority_queue<int> pq;
    sort(roap.begin(),roap.end());
    n++;
    for(int i=0;i<n;i++){
        pq.push(roap[i] * (n-i-1));
    }
    cout<<pq.top();
}