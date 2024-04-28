#include <iostream>
#include <queue>

using namespace std;

priority_queue<pair<int,bool>,vector<pair<int,bool>>,greater<pair<int,bool>>> pq;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 0)
        {
            if (pq.empty())
                cout << "0\n";
            else
            {
                if(pq.top().second==0){
                    cout<<-pq.top().first<<'\n';
                }else cout<<pq.top().first<<'\n';
                pq.pop();
            }
        }
        else
            pq.push({abs(a),a>=0}); //0보다 크면 true 1이 담긴다
    }
}