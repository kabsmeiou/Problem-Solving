#include <bits/stdc++.h>

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int n;
        std::cin >> n;
        std::vector<int> p(n);
        for (int i = 0; i < n; i++) {
            int x;
            std::cin >> x;
            x--;
            p[x] = i;
        }
        int l = n / 2, r = n - l;
        while (l > 0 && p[l - 1] < p[l] && p[r] > p[r - 1]) l--, r++;
        std::cout << l << '\n';
    }
}