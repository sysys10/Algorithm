#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> node[100001];

void input(){
    cin>>n;
    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        node[a].push_back(b);
        node[b].push_back(a);
    }
}
int ans[100001]={0};

void bfs(){

    queue<int> q;
    q.push(1);
    while(!q.empty()){
        int root= q.front();
        q.pop();
        int s= node[root].size();
        for(int i=0;i<s;i++){

            if(ans[node[root][i]]==0){
            
                ans[node[root][i]]=root;
                q.push(node[root][i]);
            }
        }
    }

}

void solve(){
    bfs();
    for(int i=2;i<=n;i++){
        cout<<ans[i]<<'\n';
    }
}

int main(){
    input();
    solve();
}