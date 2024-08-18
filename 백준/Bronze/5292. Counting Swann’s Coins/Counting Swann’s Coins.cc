#include <bits/stdc++.h>
using namespace std;

void solve(){
    int arr[300][300];
    int t;
    long long n, m, k = 0, sum = 0, cnt = 0;
    double a, b, c, d, e, f = 0;

    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << "DeadMan\n";
        }
        else if (i % 3 == 0)
        {
            cout << "Dead\n";
        }
        else if (i % 5 == 0)
        {
            cout << "Man\n";
        }
        else
            cout << i << ' ';
    }

}

int main()
{
    solve();
}