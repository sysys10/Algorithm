#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N, P, S;
    cin >> N >> P >> S;
    int remain = N;

    while (S--) {
        int m;
        cin >> m;
        bool flag = false;

        for (int i = 0; i < m; i++) {
            int card;
            cin >> card;
            if (card == P) {
                flag = true;
            }
        }

        if (flag) {
            remain = m;
            cout << "KEEP\n";
        } else {
            remain -= m;
            cout << "REMOVE\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}