#include <bits/stdc++.h>
using namespace std;

int fac(int num)
{
    int a = 1;
    for (int i = 1; i <= num; i++)
        a *= i;
    return a;
}

void solve()
{
    int n;
    cin >> n;
    int arr[6] = {0};
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a == 0 || b == 0)
        {
            arr[4]++;
            continue;
        }
        bool flagx = false, flagy = false;
        if (a > 0)
            flagx = true;
        if (b > 0)
            flagy = true;
        if (flagx && flagy)
            arr[0]++;
        if (!flagx && flagy)
            arr[1]++;
        if (!flagx && !flagy)
            arr[2]++;
        if (flagx && !flagy)
            arr[3]++;
    }
    for (int i = 0; i < 4; i++)
    {
        cout << 'Q' << i + 1 << ": " << arr[i] << '\n';
    }
    cout << "AXIS: " << arr[4];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}