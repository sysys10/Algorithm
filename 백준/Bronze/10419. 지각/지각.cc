#include <bits/stdc++.h>
using namespace std;

int main() {

    int t, d, a = 0; cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> d;
        for (int j = 0; (j * j) + j <= d; j++)
        {
            if (j > a) {
                a = j;
            }
        }

        cout << a << "\n";
        a = 0;
    }

    return 0;
}