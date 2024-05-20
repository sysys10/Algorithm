#include <bits/stdc++.h>
#define INF 2000000000
using namespace std;
int arr[100001] = {0};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int left = 0;
    int right = 0;
    int cnt = 0;
    int maxcnt = 0;
    arr[v[0]]++;
    cnt++;
    while (left <= right && right < n - 1)
    {

        if (arr[v[right]] <= k)
        {
            arr[v[++right]]++;
            cnt++;
        }
        if (arr[v[right]] > k)
        {
            arr[v[left++]]--;
            cnt--;
        }
        maxcnt = max(cnt, maxcnt);
    }
    maxcnt = max(cnt, maxcnt);

    cout << maxcnt;
}