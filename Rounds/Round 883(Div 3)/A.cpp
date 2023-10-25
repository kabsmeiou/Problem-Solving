#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int T;
    std::cin >> T;
    while (T--) {
        int n;
        std::cin >> n;
        int ans = n;
        for (int i = 0; i < n; i++) {
            int a, b;
            std::cin >> a >> b;
            if (a <= b) ans--;
        }
        std::cout << ans << '\n';
    }
}