#include <iostream>

int main() {
	int n, m;
	int num;
	long long result{1};
	std::cin >> n >> m;
	for (int i{}; i < n; ++i) {
		std::cin >> num;
		result *= num % m;
		result %= m;
	}
	std::cout << result % m << "\n";
}