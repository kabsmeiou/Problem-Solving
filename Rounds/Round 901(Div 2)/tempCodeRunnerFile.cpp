#include <bits/stdc++.h>

#define ll long long

int main() {
    int tt;
    std::cin >> tt;
    while (tt--) {
        int n, m, k;
        std::cin >> n >> m >> k;

       
        int mn = 1e9, mx = -1e9;
        int smn = 1e9, smx = -1e9;
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            int a;
            std::cin >> a;
            ans += a;
            mx = std::max(a, mx);
            mn = std::min(a, mn);
        }

        for (int i = 0; i < m; i++) {
            int a;
            std::cin >> a;
            smn = std::min(a, smn);
            smx = std::max(a, smx);
        }

        if (k & 1) {
            std::cout << std::max(ans, ans + smx - mn) << '\n';
        } else {
            std::cout << ans - mn + std::max(mx, mn) - std::max(mx, smx) + std::min(mn, smn);
        }
    }
}