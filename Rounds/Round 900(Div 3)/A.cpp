#include <bits/stdc++.h>

int main() {
    int tt;
    std::cin >> tt;
    while (tt--) {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> a(n);
    bool flag = false;
    for (auto c : a) {
        std::cin >> c;
        if (c == k) {
            flag = true;
        }
    }

    std::cout << (flag ? "YES" : "NO") << std::endl;
    }
}