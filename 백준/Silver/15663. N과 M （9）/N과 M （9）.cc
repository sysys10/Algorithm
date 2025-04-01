#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, M;
int ans[10];
bool isUsed[10];
vector<int> v;

void solve(int L)
{
    if (L == M)
    {
        for (int i = 0; i < M; i++)
            cout << ans[i] << ' ';
        cout << '\n';
        return;
    }

    int tmp = 0;
    for (int i = 0; i < N; i++)
    {
        if (!isUsed[i] && tmp != v[i])
        {
            ans[L] = v[i];
            tmp = v[i];
            isUsed[i] = true;
            solve(L + 1);
            isUsed[i] = false;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    v.resize(N);
    for (int i = 0; i < N; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    solve(0);

    return 0;
}