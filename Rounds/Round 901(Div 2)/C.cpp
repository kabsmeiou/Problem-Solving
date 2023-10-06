#include <bits/stdc++.h>

int main() {
    int tt;
    std::cin >> tt;
    while (tt--) {
        int n, m;
        std::cin >> n >> m;
        long long ans = 0;
        int cnt = 0;
        bool ok = true;
        while (n != 0) {
            ans += n % m;
            n = 2 * (n % m);
            cnt++;
            if (cnt > 32) {
                ok = false;
                break;
            }
        }
        std::cout << (ok ? ans : -1) << '\n';
    }
}