#include <bits/stdc++.h>
#define INF 987654321
using namespace std;
int n, m, k;

vector<pair<int, int>> v[1001];
// 시작점, {거리, 도착점}
int dist[1001];
vector<int> ans[1001];

void input(){

    cin >> n >> m >> k;

    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({c, b});
    }
}

priority_queue<int> answer[1001];

void dijkstra(int start){

    priority_queue<pair<int, int>> pq;
    // 거리, 도착점

    pq.push({0, start});
    answer[start].push(0);
    while (!pq.empty())
    {

        int cost = -pq.top().first;
        int current = pq.top().second;
        pq.pop();

        for (int i = 0; i < v[current].size(); i++)
        {

            int Ncost = v[current][i].first;
            int next =  v[current][i].second;

            //기준 만들기.
            if (answer[next].size() < k)
            {
                answer[next].push(Ncost + cost);
                pq.push({-(cost + Ncost), next});
            }
            else 
            
            if (answer[next].top() > Ncost + cost){

                answer[next].push(Ncost + cost);
                answer[next].pop();
                pq.push({-(cost + Ncost), next});
            }

            dist[next] = cost + Ncost;
        }
    }
}

// 사이즈 유지하고,
void reset()
{
    for (int i = 1; i <= n; i++)
    {
        dist[i] = INF;
    }
}
void solve()
{
    reset();
    dijkstra(1);
    for (int i = 0; i < n; i++)
    {
        if (answer[i + 1].size() < k){

            cout << -1 << endl;
        }
        else
            cout << answer[i + 1].top() << endl;
    }
}

int main()
{

    input();
    solve();
}