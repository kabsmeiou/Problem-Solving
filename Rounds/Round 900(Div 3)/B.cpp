#include <bits/stdc++.h>
#define ll long long
int main() {
    int tt;
    std::cin >> tt;
    while (tt--) {
        int n;
        std::cin >> n;
        std::vector<ll> a(n);
        for (int i = 1; i <= n; i++) {
            if (i >= 3) {
                a[i - 1] = a[i - 2] + 1;
                ll temp = a[i - 2] + a[i - 3];
                ll cur = (a[i - 1] * 3);
                while (cur % temp == 0) {
                    cur++;
                    a[i - 1] = cur;
                }
            } else {
                a[i - 1] = i + 1;
            }
        }
        for (auto c : a) {
            std::cout << c << ' ';
        }
        std::cout << '\n';
    }
}