#include <bits/stdc++.h>
#define INF 987654321
#define MAX 810
using namespace std;

int n, m;
int x, y;

vector<pair<int, int>> v[MAX];
bool visited[MAX];
int dist[MAX];
void dijkstra(int x)
{

    dist[x] = 0;
    priority_queue<pair<int, int>> pq;

    pq.push({0, x});

    while (!pq.empty())
    {
        int node = pq.top().second;
        int cost = -pq.top().first;
        pq.pop();

        int s = v[node].size();
        for (int i = 0; i < s; i++)
        {
            int next = v[node][i].first;
            int Ncost = v[node][i].second;

            if (dist[next] > cost + Ncost)
            {

                dist[next] = cost + Ncost;
                pq.push({-dist[next], next});
            }
        }
    }
}

int main()
{

    cin >> n >> m;
    int a, b, c;

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b >> c;

        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }
    cin >> x >> y;
    
    
    bool flag1 = 1, flag2 = 1;

    for (int i = 0; i < n; i++)
        dist[i + 1] = INF;
    dijkstra(1);
    // 무한대로 만들어놓고, 1에서 다른 노드들 까지 거리 구하기

    int route1 = dist[x]; // 1에서 x까지의 거리

    int route2 = dist[y]; // 1에서 y까지의 거리

    if (route1 == INF)
        flag1 = false; // 1~n까지에서 x를 안거쳤다면

    if (route2 == INF)
        flag2 = false; // 1~n까지에서 y를 안거쳤다면 flag2를 false로

    for (int i = 0; i < n; i++)
        dist[i + 1] = INF; // 다시 초기화하고
    dijkstra(x); // x부터 n까지의 거리 구하기

    if (flag1 == true)
        route1 += dist[y]; // x를 거쳤었다면 1에서 x까지에서 x에서 y까지도 더함

    if (flag2 == true)
        route2 += dist[y]; // y를 거쳤었다면, 1에서y까지에서 x에서 y까지도 더함

    for (int i = 0; i < n; i++)
        dist[i + 1] = INF; // 다시 초기화하고
    dijkstra(y);

    if (flag1 = true)
        route1 += dist[n];
    
    for (int i = 0; i < n; i++)
        dist[i + 1] = INF; // 다시 초기화하고
    dijkstra(x);
    
    if (flag2 = true)
        route2 += dist[n];
    
    int ans;
    
    if(flag1==false && flag2==false)ans=-1;
    else ans=min(route1,route2);

    if(ans >= INF){
        ans=-1;
    }

    cout<<ans;
}