#include <bits/stdc++.h>

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int T;
    std::cin >> T;
    while (T--) {
        int n;
        std::cin >> n;
        int ans = 0, p = 0, q = 0;
        for (int i = 0; i < n; i++) {
            int x;
            std::cin >> x;
            if (x == 1) {
                ++p;
            } else {
                q += p;
                p = 0;
            }
            if (!q) {
                ans = std::max(ans, p);
            } else ans = std::max(ans, p + q / 2 + 1);
        }
        std::cout << ans << '\n';
    }
}