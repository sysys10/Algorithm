#include <bits/stdc++.h>
using namespace std;

int n, m, z, day = 0, countminus = 0;
int box[100][100][100];
int dx[] = {-1, 1, 0, 0, 0, 0};
int dy[] = {0, 0, -1, 1, 0, 0};
int dh[] = {0, 0, 0, 0, 1, -1};

bool visited[101][101][101] = {0};

queue<pair<pair<int, int>, int>> loc;
bool flag = false;
void bfs(int x, int y, int h)
{
    visited[x][y][h] = 1;
    loc.pop();
    for (int i = 0; i < 6; i++)
    {
        int x1 = x + dx[i];
        int y1 = y + dy[i];
        int h1 = h + dh[i];
        if (x1 < 0 || x1 >= n || y1 < 0 || y1 >= m || h1 < 0 || h1 >= z)
            continue;
        if (box[x1][y1][h1] != -1 && visited[x1][y1][h1] == 0)
        {
            box[x1][y1][h1] = 1;
            visited[x1][y1][h1] = 1;
            loc.push({{x1, y1}, h1});
            flag = true;
        }
    }
}

bool tomato_check()
{
    for (int k = 0; k < z; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {

                if (box[i][j][k] == 0)
                    return false;
            }
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> m >> n >> z;
    for (int k = 0; k < z; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> box[i][j][k];
                if (box[i][j][k] == 1)
                    loc.push(make_pair(make_pair(i, j), k));
                if (box[i][j][k] == -1)
                    countminus++;
            }
        }
    }

    while (!tomato_check())
    {
        int a = loc.size();
        flag = false;
        for (int i = 0; i < a; i++)
        {

            bfs(loc.front().first.first, loc.front().first.second, loc.front().second);
        }
        if (flag == false)
        {
            cout << "-1";
            return 0;
        }
        day++;

        // if (day >= n*m)
        // {
        //     cout << "-1";
        //     return 0;
        // }
    }
    cout << day;
}