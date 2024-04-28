#include <bits/stdc++.h>
using namespace std;


priority_queue<int> pq;
int n, d, k, c, a, b;
int belt[3005000];
int cnt[3001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> d >> k >> c;

    for (int i = 0; i < n; i++)
        cin >> belt[i];

    for (int i = n; i < k + n; i++)
        belt[i] = belt[i - n];

    int left = 0;
    int right = k - 1;
    int result = 0;

    for (int i = left; i <= right; i++)
    {
        if (cnt[belt[i]] == 0)
        {
            result++;
        }
        cnt[belt[i]]++;
    }

    if (cnt[c] == 0)
        pq.push(result + 1);
    
    while (right < n + k-1)
    {
        a = belt[left++], b = belt[++right];

        cnt[a]--;
        if (cnt[a] == 0)
            result--;
        if (cnt[b] == 0)
            result++;
        cnt[b]++;


        if (cnt[c] == 0)
            pq.push(result + 1);
        else
            pq.push(result);

        // if(pq.top()==k+1)
        //     break;
    }

    cout << pq.top();

    return 0;
}