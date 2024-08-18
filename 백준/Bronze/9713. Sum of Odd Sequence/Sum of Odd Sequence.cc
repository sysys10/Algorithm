#include <bits/stdc++.h>
using namespace std;

int ab(int x){
    int b=0;
   for(int i=1;i<=x;i+=2){
        b+=i;
    }
    return b;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
   int t;
   cin>>t;
    int sum=0;
    for(int i=1;i<=t;i++){
       int a;
       cin>>a;
       cout<<ab(a)<<endl;
    }
}