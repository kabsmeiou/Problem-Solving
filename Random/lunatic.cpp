#include <bits/stdc++.h>
#define int long long
signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int T;
    std::cin >> T;
    while (T--) {
        int n;
        std::cin >> n;
        std::vector<int> a(n);
        for (auto &c : a) std::cin >> c;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans = std::__gcd(ans, std::abs(a[i] - a[n - i - 1]));
        }
        std::cout << ans << '\n';
    }
}