#include <bits/stdc++.h>

int main() {
    int tt;
    std::cin >> tt;
    while (tt--) {
        int n;
        std::cin >> n;
        std::vector<int> a(n);
        std::vector<int> b(n);
        for (auto &c : a) std::cin >> c;
        for (auto &c : b) std::cin >> c;
        
        int diff, cnt = 0;
        bool ok = true;
        for (int i = 0; i < n; i++) {
            if (b[i] == 0) {
                cnt++;
                continue;
            }
            if (a[i] < b[i]) {
                ok = false;
                break;
            }
            diff = a[i] - b[i];
        }

        if (cnt == n) {
            std::cout << "YES\n";
            continue;
        }

        if (!ok) {
            std::cout << "NO\n";
            continue;
        }

        for (int i = 0; i < n; i++) {
            int temp = std::max(0, a[i] - diff);
            if (temp != b[i]) {
                ok = false;
                break;
            }
        }
        
        std::cout << (ok ? "YES\n" : "NO\n");
    }
}