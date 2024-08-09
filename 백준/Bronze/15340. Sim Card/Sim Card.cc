#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int usageCall, usageData;
  while (cin >> usageCall >> usageData) {
    if (usageCall == 0 && usageData == 0) break ;
    int costParsTel = 30 * usageCall + 40 * usageData;
    int costParsCell = 35 * usageCall + 30 * usageData;
    int costParsPhone = 40 * usageCall + 20 * usageData;

    int minCost = min({costParsTel, costParsCell, costParsPhone});
    cout << minCost << "\n";
  }

  return 0;
}