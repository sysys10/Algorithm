#include <iostream>
#include <cmath>
using namespace std;

long long  num[1000001];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	long long min, max;
	cin >> min >> max;
	for (long long i = min; i <= max; i++) {
		num[i - min] = i;
	}
	
	for (long long i = 2; i * i <= max; i++) {
		long long N = min / (i * i);
		if (min % (i * i) != 0)
			N++;
		while (N * i * i <= max) {
			num[N * i * i - min] = 0;
			N++;
		}
	}
	int ans = 0;
	for (long long i = min; i <= max; i++) {
		if (num[i - min] != 0)
			ans++;
	}
	cout << ans;
}