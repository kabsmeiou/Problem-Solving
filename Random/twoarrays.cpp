#include <bits/stdc++.h>
#define int long long
signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int T;
    std::cin >> T;
    while (T--) {
        int n, t;
        std::cin >> n >> t;
        int p = 0;
        for (int i = 0; i < n; i++) {
            int x;
            std::cin >> x;
            if (x * 2 > t) {
                std::cout << 1 << ' ';
            } else if (x * 2 < t) {
                std::cout << 0 << ' ';
            } else {
                std::cout << p << ' ';
                p = !p;
            }
        }
        std::cout << '\n';
    }
}