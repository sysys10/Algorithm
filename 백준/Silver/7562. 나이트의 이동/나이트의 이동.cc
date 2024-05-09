#include <bits/stdc++.h>

using namespace std;

int t;
int cnt;
int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

int board[301][301] = {0};

void bfs(int x, int y, int n)
{
    cnt = 1;
    
    queue<pair<int, int>> q;

    q.push(make_pair(x, y));

    while (1)
    {
        int s = q.size();
        for (int i = 0; i < s; i++)
        {
            int x1 = q.front().first;
            int y1 = q.front().second;
            q.pop();
            for (int j = 0; j < 8; j++)
            {

                int x2 = x1 + dx[j];
                int y2 = y1 + dy[j];

                if (x2 < 0 || x2 >= n || y2 < 0 || y2 >= n)
                    continue;

                if (board[x2][y2] == 0){
                    board[x2][y2] = 1;
                    q.push(make_pair(x2, y2));
                }

                else if (board[x2][y2] == 2){
                    cout << cnt << endl;
                    return;
                }
            }
        }
        cnt++;
    }
}

void solve()
{

    int n, x, y, ox, oy;
    cin >> n >> x >> y >> ox >> oy;

    board[x][y] = 1; // 스타팅 포인트

    board[ox][oy] = 2; // 목표지점

    if (x == ox && y == oy)
    {
        cout << '0' << endl;
        return;
    }

    bfs(x, y, n);
}

int main()
{
 
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
        memset(board, 0, sizeof(board));
        // memset(visited, 0, sizeof(visited));
    }
    return 0;
}