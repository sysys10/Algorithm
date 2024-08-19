#include <bits/stdc++.h>
using namespace std;
   
long long K, N; 
void solve()
{
    cin >> K >> N;
    if (N == 1)
        cout << -1;
    else
    {
        long long x = (K * N) / (N - 1);
        if ((K * N) % (N - 1) != 0)
            x++;
        cout << x;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}