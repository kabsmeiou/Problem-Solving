#include <bits/stdc++.h>
const int N = 1e3 + 10;
int a[N][N];
signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int T;
    std::cin >> T;
    while (T--) {
        int n, k;
        std::cin >> n >> k;
        int cur = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) std::cin >> a[i][j];
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (a[i][j] != a[n - 1 - i][n - 1 - j]) {
                    cur++;
                }
            }
        }
        cur /= 2;
        if (cur > k) {
            std::cout << "NO" << '\n';
        } else {
            if (n & 1) {
                std::cout << "YES" << '\n';
            } else if ((k - cur) & 1) {
                std::cout << "NO" << '\n';
            } else {
                std::cout << "YES" << '\n';
            }
        }
    }
}