#include <bits/stdc++.h>
#define ll long long
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int T;
    std::cin >> T;
    while (T--) {
        int n;
        std::cin >> n;
        std::vector<int> a(n);
        for (int i = 0; i < n; i++) {
            std::cin >> a[i];
        }
        if (a[0] == 1) {
            std::cout << n + 1 << ' ';
            for (int i = 1; i <= n; i++) {
                std::cout << i << " \n"[i == n];
            }
        } else if (a[n - 1] == 0) {
            for (int i = 1; i <= n; i++) {
                std::cout << i << ' ';
            }
            std::cout << n + 1 << '\n';
        } else {
            for (int i = 1; i < n; i++) {
                if (!a[i - 1] && a[i]) {
                    for (int j = 1; j <= i; j++) {
                        std::cout << j << ' ';
                    }
                    std::cout << n + 1 << ' ';
                    for (int j = i + 1; j <= n; j++) {
                        std::cout << j << " \n"[j == n];
                    }
                    break;
                }
            }
        }
    }
}