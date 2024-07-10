#include <bits/stdc++.h>
using namespace std;

void solve()

{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    if (arr[0] >= 1000)
    {
        if (arr[1] >= 8000 || arr[2] >= 260)
        {
            cout << "Very Good";
            return;
        }
        cout << "Good";
        return;
    }
    else
        cout << "Bad";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
