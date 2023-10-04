#include <bits/stdc++.h>

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int n, k;
        std::cin >> n >> k;
        int p = n - (k - 1);
        if (p > 0 && p&1) {
            std::cout << "YES" << '\n';
            for (int i = 0; i < k - 1; i++) {
                std::cout << 1 << ' ';
            }
            std::cout << p << std::endl;
            continue;
        }

        int q = n - ((k - 1) * 2);
        if (q > 0 && q % 2 == 0) {
            std::cout << "YES\n";
            for (int i = 0; i < k - 1; i++) {
                std::cout << 2 << ' ';
            }
            std::cout << q << std::endl;
            continue;
        }
        std::cout << "NO\n";
    }
}