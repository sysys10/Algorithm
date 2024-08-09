#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int a, b;
  while (cin >> a >> b) {
    if (a == 0 && b == 0) break ;
    int q = 30 * a + 40 * b;
    int w = 35 * a + 30 * b;
    int e = 40 * a + 20 * b;

    int minCost = min({q, w, e});
    cout << minCost << "\n";
  }

  return 0;
}