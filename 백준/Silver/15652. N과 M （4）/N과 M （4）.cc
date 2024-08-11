#include <bits/stdc++.h>
using namespace std;
int n, m;
int arr[1000];
void dfs(int num, int k)
{
    if (k == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << arr[i] << ' ';
        }
        cout << "\n";
    }
    else
        for (int i = num; i <= n; i++)
        {
            arr[k] = i;
            dfs(i, k + 1);
        }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;

    dfs(1, 0);
}
