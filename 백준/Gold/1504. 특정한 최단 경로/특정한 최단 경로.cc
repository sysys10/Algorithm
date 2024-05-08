#include <bits/stdc++.h>
#define INF 987654321
#define MAX 810
using namespace std;

int n, m;
int x, y;

vector<pair<int, int>> v[MAX];
bool visited[MAX];
int dist[MAX];

void reset()
{
    for (int i = 0; i < n; i++)
        dist[i + 1] = INF;
}
void dijkstra(int x)
{
    reset();
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
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;
    int a, b, c;

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b >> c;

        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }
    cin >> x >> y;

    dijkstra(1);

    int route1 = dist[x]; // 1에서 x까지의 거리
    int route2 = dist[y]; // 1에서 y까지의 거리
    //이게 되는 이유는? x,y와 다른 노드들과의 연결이 최대 하나이기 떄문
    if (route1 == INF || route2 == INF)
    {
        cout << -1;
        return 0;
    }

    dijkstra(x); // x부터 노드들 까지의 거리

    route1 += dist[y];
    route2 += dist[y] + dist[n]; //1에서y, y에서 x간다음에 n까지 가는 거


    dijkstra(y); // y에서 노드들 까지의 거리 구하고
    route1 += dist[n]; // 1에서 x, x에서 y간다음에 y에서n까지 가는 거

    int ans;

    ans = min(route1, route2);
    //둘중에 더 작은 것
    if (ans >= INF)
    {
        ans = -1;
    }

    cout << ans;
}