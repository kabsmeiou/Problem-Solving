#include <iostream>

int main() {
    int tt;
    std::cin >> tt;
    while (tt--) {
        int n, m;
        std::cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++) {
            std::cin >> a[i];
        }
        int res = 0;
        for (int i = 0; i < m; i++) {
            int b;
            std::cin >> b;
            res |= b;
        }

        int x = 0, y = 0;
        for (int i = 0; i < n; i++) {
            x ^= a[i];
            y ^= (a[i] | res);
        }
        std::cout << std::min(x, y) << ' ' << std::max(x, y) << '\n';
    }
}