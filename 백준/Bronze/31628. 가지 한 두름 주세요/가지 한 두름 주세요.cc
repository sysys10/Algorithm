#include <bits/stdc++.h>
using namespace std;
#define INF 987654321
int n, m, k;
void solve()
{
    string board[10][10];
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
        {
            cin >> board[i][j];
        }

    for (int i = 0; i < 10; i++)
    {
        int flag = true;
        for (int j = 0; j < 9; j++)
        {
            if (board[i][j].compare(board[i][j + 1]) != 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << 1;
            return;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        int flag = true;
        for (int j = 0; j < 9; j++)
        {
            if (board[j][i].compare(board[j + 1][i]) != 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << 1;
            return;
        }
    }
    cout << 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
