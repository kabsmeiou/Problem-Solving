#include <bits/stdc++.h>

#define ll long long

int main() {
    int T;
    std::cin >> T;
    while(T--) {
        int n, q;
        std::cin >> n >> q;
        std::vector<std::pair<int, ll>> vp = {{0, 0LL}}; //prefix start
        for (int i = 0; i < n; i++) {
            int x;
            std::cin >> x;
            if (x > vp.back().first) {
                vp.push_back({x, x + vp.back().second});
            } else {
                vp.back().second += x;
            }
        }
        for (int i = 0; i < q; i++) {
            int k;
            std::cin >> k;
            //binary search
            int pos = std::lower_bound(vp.begin(), vp.end(), std::make_pair(k + 1, 0LL)) - vp.begin();
            std::cout << vp[pos - 1].second << " \n"[i == q - 1];
        }
    }
}