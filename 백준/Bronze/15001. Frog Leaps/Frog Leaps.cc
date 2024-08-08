#include <iostream>
using namespace std;

int N;
long long ans, old;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> old; N--;
	while (N--) {
		long long x; cin >> x;
		ans += (x - old) * (x - old);
		old = x;
	}

	cout << ans;
}