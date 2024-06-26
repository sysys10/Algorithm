#include <bits/stdc++.h>
using namespace std;

int n, m, x, maxcnt = 0;
vector<int> freinds[200001];
bool flag1[200001], visited[200001];

void input(){

    cin >> n >> m;
    for (int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;

        freinds[a].push_back(b);
        freinds[b].push_back(a);
    }
    cin >> x;
}
// 배신자랑 닿아있는 애들 표시해보자 걔네끼리 연결되면 그걸로

int bfs(int a){

    int check=0, flag = 0, cnt = 1;

    queue<int> q;
    q.push(a);
    
    while (!q.empty()){

        int b = q.front();
        q.pop();
        if(flag1[b]==1){
            check++;
            if(check==2){
                cnt--;
            }
        }
        for (int i = 0; i < freinds[b].size(); i++){
            int c = freinds[b][i];
        
            if (c != x){

                if (visited[c] == 0){
                
                    visited[c] = 1;
                    q.push(c);
                    cnt++;
                }
            }
            else{
                if(!flag)
                    cnt++;
                flag=1;
            }
        }
    }
    return cnt;
}

void solve(){

    for (int i = 0; i < freinds[x].size(); i++){

        flag1[freinds[x][i]] = 1; // true 면 배신자랑 닿아있음
    }
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0 && i != x){

            visited[i]=1;
            maxcnt = max(maxcnt, bfs(i));
        }
    }
    cout << maxcnt;
}

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    input();
    solve();
}