#include <bits/stdc++.h>
#define int long long
signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int T;
    std::cin >> T;
    while (T--) {
        std::string s, t;
        std::cin >> s >> t;
        int cur = std::count(t.begin(), t.end(), 'a');
        if (t == "a") {
            std::cout << 1 << '\n';
        } else if (!!cur) {
            std::cout << -1 << '\n';
        } else {
            int ans = (std::pow(2LL, s.size()));
            std::cout << ans << '\n';
        }
    }
}