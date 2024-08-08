#include <iostream>
#include <vector>
#include <iomanip>

double calculate_slugging_percentage(const std::vector<int>& at_bats) {
    int total_bases = 0;
    int official_at_bats = 0;
    
    for (int ab : at_bats) {
        if (ab != -1) { 
            total_bases += ab;
            official_at_bats++;
        }
    }
    
    if (official_at_bats == 0) {
        return 0.0;  
    }
    
    return static_cast<double>(total_bases) / official_at_bats;
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> at_bats(n);
    for (int i = 0; i < n; i++) {
        std::cin >> at_bats[i];
    }
    
    double result = calculate_slugging_percentage(at_bats);
    
    std::cout << std::setprecision(15) << result << std::endl;
    
    return 0;
}