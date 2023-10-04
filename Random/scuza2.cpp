#include <bits/stdc++.h>

#define ll long long

int main() {
    int T;
    std::cin >> T;
    while(T--) {
        int n, q;
        std::cin >> n >> q;
        std::vector<int> pm;
        std::vector<ll> ps;
        ps.push_back(0);
        for (int i = 0; i < n; i++) {
            int x;
            std::cin >> x;
            ps.push_back(ps.back() + x);
            if (i == 0) {
                pm.push_back(x);
            } else {
                pm.push_back(std::max(pm.back(), x));
            }
        }

        for (int i = 0; i < q; i++) {
            ll k;
            std::cin >> k;
            //binary search
            int pos = std::upper_bound(pm.begin(), pm.end(), k) - pm.begin();
            std::cout << ps[pos] << " \n"[i == q - 1];
        }
    }
}