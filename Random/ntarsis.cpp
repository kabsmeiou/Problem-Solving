#include <bits/stdc++.h>
#define int long long
signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int T;
    std::cin >> T;
    while (T--) {
        int n, k;
        std::cin >> n >> k;
        std::vector<int> a(n);
        for (auto &c : a) std::cin >> c;
        if (a[0] != 1) {
            std::cout << 1 << '\n';
            continue;
        }
        int ans = 1, it = 0;
        for (int i = 0; i < k; i++) {
            while (it < n && a[it] <= ans + it) it++;
            ans += it;
        }
        std::cout << ans << '\n';
    }
}