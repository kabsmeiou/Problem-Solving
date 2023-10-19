#include <bits/stdc++.h>
#define ll long long
int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int n;
        std::cin >> n;
        std::vector<int> a(n);
        for (auto &c : a) std::cin >> c;
        if (std::is_sorted(a.begin(), a.end())) {
            std::cout << 0 << '\n';
            continue;
        }
        int l = a[0], r = a[n - 1];
        std::cout << n - 1 << '\n';
        std::cout << 1 << ' ' << n << '\n';
        if ((r + l) & 1) {
            r = l;
        } else {
            l = r;
        }
        for (int i = 1; i < n - 1; i++) {
           if ((a[i] + l) & 1) {
               std::cout << 1 << ' ' << i + 1 << '\n';
           } else {
               std::cout << i + 1 << ' ' << n << '\n';
           }
        }
    }
}