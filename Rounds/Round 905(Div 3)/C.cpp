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
        int ret = k, e = 0;
        for (int i = 0; i < n; i++) {
            if (!(a[i] & 1)) e++;
            if (a[i] % k == 0) ret = 0;
            ret = std::min(ret, k - a[i] % k);
        }
        if (k == 4) {
            std::cout << std::min(ret, 2 - std::min(2LL, e)) << '\n';
            continue;
        }
        std::cout << ret << '\n';
    }
}