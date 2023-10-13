#include <bits/stdc++.h>
#define ll long long
int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int a, b, c, d;
        std::cin >> a >> b >> c >> d;
        ll ans = 0;
        if (a == 0) {
            bool ok = (b != 0 || c != 0 || d != 0);
            std::cout << (ok ? 1 : 0) << '\n';
            continue;
        }
        ans += a + std::min(b, c) * 2 + std::min(a + 1, std::max(b, c) - std::min(b, c) + d);
        std::cout << ans << '\n';
    }
}