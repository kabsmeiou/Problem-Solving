#include <bits/stdc++.h>
#define int long double
signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int T;
    std::cin >> T;
    while (T--) {
        int n, d, h;
        std::cin >> n >> d >> h;
        std::vector<int> pos(n);
        for (int i = 0; i < n; i++) std::cin >> pos[i];
        int ans = 1.0 * h * d / 2;
        for (int i = 0; i < n - 1; i++) {
            if (pos[i] + h <= pos[i + 1]) ans += 1.0 * h * d / 2; //IF NO OVERLAPS
            else {
                ans += 1.0 * h * d / 2;
                int hrem = pos[i] + h - pos[i + 1];
                int drem = hrem / h * d;
                ans -= 1.0 * hrem * drem / 2;
            }
        }
        std::cout << std::fixed << std::setprecision(7) << ans << '\n';
    }
}