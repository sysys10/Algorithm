#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

void solve()
{
    queue<pair<int, int>> q;
    priority_queue<int> pq;
    int n, m, num;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        q.push({num, i}); // 중요도, 자릿수
        pq.push(num);
    }
    int count = 0;
    while (1)
    {
        if (q.front().first == pq.top())
        {
            count++;
            if(q.front().second==m)break;
            pq.pop();
            q.pop();
        }
        else{ //다르면
            q.push({q.front().first,q.front().second});
            q.pop();
        }
        
    }
    cout<<count<<endl;
}

int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
    return 0;
}