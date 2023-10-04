#include <bits/stdc++.h>
#define ll long long
int main() {
    int tt;
    std::cin >> tt;
    while (tt--) {
        int n;
        std::cin >> n;
        std::vector<ll> a(n);
        std::vector<ll> b(n);
        for (auto &c : a) std::cin >> c;
        for (auto &c : b) std::cin >> c;

        ll cur = 0;
        for (int i = 0; i < n; i++) {
            cur = std::max(cur, a[i]);
            std::cout << std::max((b[i]  - cur), 0LL) << ' ';
            cur = std::max(cur, b[i]);
        }
        std::cout << '\n';
    }
}