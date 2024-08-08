#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int L, R, A; 
    cin >> L >> R >> A;
	int total = L + R + A;

	if (L < R) {
		int temp = min(R - L, A);
		L += temp, A -= temp;
	}
	else {
		int temp = min(L - R, A);
		R += temp, A -= temp;
	}

	if (R == L) cout << total - (A & 1);
	else cout << total - abs(R - L);
}