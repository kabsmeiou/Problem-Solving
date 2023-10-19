#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int T;
    std::cin >> T;
    while (T--) {
        int n;
        std::cin >> n;
        int ans = 0;
        for (int i = 0; i < n - 1; i++) {
            int x; 
            std::cin >> x;
            ans += x;
        }
        std::cout << ans * -1 << '\n';
    }
}