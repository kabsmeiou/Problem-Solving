#include <bits/stdc++.h>
#define int long long
signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int T;
    std::cin >> T;
    while (T--) {
        int l, r, x, a, b;
        std::cin >> l >> r >> x >> a >> b;
        if (a == b) {
            std::cout << 0 << '\n';
            continue;
        }
        if (a + x <= b || a - x >= b) {
            std::cout << 1 << '\n';
            continue;
        }
        if (r - std::max(a, b) >= x || std::min(a, b) - l >= x) {
            std::cout << 2 << '\n';
            continue;
        }
        if (b + x <= r && a - x >= l || r - a >= x && b - l >= x) {
            std::cout << 3 << '\n';
            continue;
        }
        std::cout << -1 << '\n';
    }
}