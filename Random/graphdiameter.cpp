#include <bits/stdc++.h>
#define ll long long
int main() {
    int T;
    std::cin >> T;
    while (T--) {
        ll n, m, k;
        std::cin >> n >> m >> k;
        k -= 2;
        if (m < n - 1 || m > (n * (n - 1)) >> 1 || k < 0) {
            std::cout << "NO" << '\n';
            continue;
        } else {
            if (k == 0) {
                std::cout << (n == 1 ? "YES" : "NO") << '\n';
            } else if (k == 1) {
                std::cout << (m == (n * (n - 1)) >> 1 ? "YES" : "NO") << '\n';
            } else {
                std::cout << "YES" << '\n';
            }
        }
    }
}