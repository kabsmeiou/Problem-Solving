#include <bits/stdc++.h>

#define ll long long

int main() {
    int tt;
    std::cin >> tt;
    while (tt--) {
        int a, b, n;
        std::cin >> a >> b >> n;

        ll ans = b;
        for (int i = 0; i < n; i++) {
            ll x;
            std::cin >> x;
            ans += std::min(x, a * 1LL - 1);
        }

        std::cout << ans << '\n';
    }
}