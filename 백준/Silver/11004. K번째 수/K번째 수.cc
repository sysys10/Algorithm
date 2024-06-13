#include <bits/stdc++.h>
using namespace std;
#define INF 987654321
    int arr[5000001]={0};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a,k;
    cin>>a>>k;
    for(int i=0;i<a;i++){
        cin >> arr[i];
    }
    sort(arr, arr+a);

    cout << arr[k-1];
}