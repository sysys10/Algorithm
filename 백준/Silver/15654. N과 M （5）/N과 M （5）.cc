#include <bits/stdc++.h>

using namespace std;
int n, m;
vector<int> v;
vector<int> numbers;
int visited[10001];

void dfs(int x)
{
    if (x == m)
    {
        for (int num : v)
            cout << num << ' ';
        cout << "\n";
        return;
    }
    for (int i : numbers)
    {
        if (!visited[i])
        {
            visited[i] = 1;
            v.push_back(i);
            dfs(x + 1);
            v.pop_back();
            visited[i] = 0;
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        numbers.push_back(a);
    }
    sort(numbers.begin(), numbers.end());
    dfs(0);
}