#include<iostream>
#include<string>

using namespace std;
int main()
{   
    int n,k;
    cin>>n>>k;

    cout<<"<";

    int i=0,ans[5000],flag[5000]={0};

    ans[0]=0;

    while(1){
        int tem=ans[i],temp=k;

        for(int j=tem;j<tem+temp;j++){
            ans[i]++;

            if(ans[i]>n){ans[i]=ans[i]-n;}
            if(flag[ans[i]]==1)temp++;
        }
        cout<<ans[i];
        flag[ans[i]]=1;
        ans[i+1]=ans[i];
        i++;
        if(i==n){cout<<">";return 0;}
        cout<<", ";
    }
}