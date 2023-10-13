#include <bits/stdc++.h>
int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int n;
        std::cin >> n;
        std::vector<std::vector<char>> vv(n, std::vector<char>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                std::cin >> vv[i][j];
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int mx = std::max({vv[i][j], vv[n - j - 1][i], vv[j][n - i - 1], vv[n - i - 1][n - j - 1]}); //every opposite side
                ans += mx - vv[i][j];
            }
        }
        std::cout << ans << '\n';
    }
}