#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[6] = {0};
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        
        (a == 0 || b == 0) ? arr[4]++ : 
            (a > 0 && b > 0) ? arr[0]++ :
            (a < 0 && b > 0) ? arr[1]++ :
            (a < 0 && b < 0) ? arr[2]++ :
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