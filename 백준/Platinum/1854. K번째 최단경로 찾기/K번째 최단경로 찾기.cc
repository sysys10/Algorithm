#include <bits/stdc++.h>
#define INF 987654321
using namespace std;
int n, m, k;
vector<pair<int, int>> v[1001];
priority_queue<int> answer[1001];

void input()
{

    cin >> n >> m >> k;

    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({c, b});
    }
}

void dijkstra(int start)
{

    priority_queue<pair<int, int>> pq;
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
            int next = v[current][i].second;

            int w = cost + Ncost;
            // 기준 만들기.
            if (answer[next].size() < k)
            {
                answer[next].push(w);
                pq.push({-w, next});
            }
            else if (answer[next].top() > w)
            {
                answer[next].push(w);
                answer[next].pop();
                pq.push({-w, next});
            }
        }
    }
}

void solve()
{

    dijkstra(1);
    for (int i = 0; i < n; i++)

        if (answer[i + 1].size() < k)
            cout << -1 << endl;
        else
            cout << answer[i + 1].top() << endl;
}

int main()
{
    input();
    solve();
}