#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;

vector<int> point[1001]; // point 10001개가 변수
vector<int> dfs;         // point(1001)= point라는 벡터의 최대 길이가 1001
vector<int> bfs;
bool visit[1001] = {false};

void DFS(int v)
{
    visit[v] = true;
    dfs.push_back(v);

    for (int i = 0; i < point[v].size(); i++)
    {
        if (!visit[point[v][i]])
            DFS(point[v][i]);
    }
}

void BFS(int v)
{
    queue<int> q;
    visit[v] = true;
    q.push(v);
    while (q.empty() == false)
    {
        int x = q.front();
        q.pop();
        bfs.push_back(x);
        for (int i = 0; i < point[x].size(); i++)
        {
            if (visit[point[x][i]] == false)
            {
                q.push(point[x][i]);
                visit[point[x][i]]=true;
            }
        }
    }
}

void solve()
{
    int N, M, V, a, b;
    cin >> N >> M >> V;
    for (int i = 0; i < M; i++)
    {
        cin >> a >> b;
        point[a].push_back(b); // 양방향
        point[b].push_back(a);
    }
    for(int i=1;i<=N;i++)
        sort(point[i].begin(),point[i].end());

    DFS(V);

    fill_n(visit, 1001, false);

    BFS(V);

    for(int i=0;i<dfs.size();i++)
        cout<<dfs[i]<<" ";
    cout<<'\n';
    for(int i=0;i<bfs.size();i++)
        cout<<bfs[i]<<' ';

}
int main()
{
    solve();
    return 0;
}