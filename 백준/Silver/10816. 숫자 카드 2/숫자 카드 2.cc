#include <iostream>
#include <algorithm>
using namespace std;
int N[500001], M[500001];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> N[i];
    cin >> m;
    for (int i = 0; i < m; i++)
        cin >> M[i];
    sort(N, N + n);
    for (int i = 0; i < m; i++)
        cout << upper_bound(N, N + n, M[i]) - lower_bound(N, N + n, M[i]) << ' ';
}