#include <bits/stdc++.h>
using namespace std;

vector<long long> v;

void solve()
{
   int t;
    long long n, m, k = 0, sum = 0, cnt = 0, max = 0;
    string str, s;
    int min = 1e6;

    cin >> n;
    v.push_back(2);
    k = 1;
    for (int i = 1; i < n; i++)
    {
        v.push_back(v[k - 1] + i + 1);
        k++;
        v.push_back(v[k - 1] + i + 1);
        k++;
    }
    cout << v[n - 1];


}

int main()
{
    solve();
}