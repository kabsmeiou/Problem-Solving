#include <iostream>
int a[501];
int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int n;
        std::cin >> n;
        int cur = 1e9;
        std::cin >> a[0];
        for (int i = 1; i < n; i++) {
            std::cin >> a[i];
            cur = std::min(cur, a[i] - a[i - 1]);
        }
        int ans = cur < 0 ? 0 : cur / 2 + 1;
        std::cout << ans << '\n';
    }
}