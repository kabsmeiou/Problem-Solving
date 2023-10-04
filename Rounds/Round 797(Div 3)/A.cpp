#include <iostream>
#include <cmath>
int main() {
    int tt;
    std::cin >> tt;
    while (tt--) {
        int n;
        std::cin >> n;
        //std::cout << (n + 1) / 3 << ' ' << (n + 5) / 3 << ' ' << (n - 3) / 3 << std::endl;
        if (n % 3 == 0) {
            std::cout << n / 3 << ' ' << n / 3 + 1 << ' ' << n / 3 - 1 << std::endl;
        } else if (n % 3 == 1) {
            std::cout << n / 3 << ' ' << n / 3 + 2 << ' ' << n / 3 - 1 << std::endl;
        } else {
            std::cout << n / 3 + 1 << ' ' << n / 3 + 2 << ' ' << n / 3 - 1 << std::endl;
        }
    }
}