#include <bits/stdc++.h>

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int T;
    std::cin >> T;
    while (T--) {
        int m, s;
        std::cin >> m >> s;
        std::vector<int> a(1001, 0);
        int mx = -1;
        for (int i = 0; i < m; i++) {
            int x;
            std::cin >> x;
            a[x] = 1;
            mx = std::max(x, mx);
        }
        int cur = 0, pos = 0, p = 1;
        while (p < mx) {
            if (!a[p]) cur += p;
            p++;
        }
        if (cur > s) {
            std::cout << "NO" << '\n';
            continue;
        }
        while (cur < s) {
            p++;
            cur += p;
        }
        std::cout << (cur == s ? "YES" : "NO") << '\n';
    }
}