#include <bits/stdc++.h>
#define ll long long
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int T;
    std::cin >> T;
    while (T--) {
        ll n, p;
        std::cin >> n >> p;
        std::vector<std::pair<ll, ll>> vp(n);
        for (int i = 0; i < n; i++) {
            ll se;
            std::cin >> se;
            vp[i].second = se;
        }
        for (int i = 0; i < n; i++) {
            ll fi;
            std::cin >> fi;
            vp[i].first = fi;
        }
        sort(vp.begin(), vp.end());
        ll ans = p;
        ll cur = 0;
        for (int i = 1; i < n; i++) {
            if (vp[cur].second == 0) {
                cur++;
            }
            ans += std::min(vp[cur].first, p);
            vp[cur].second--;
        }
        std::cout << ans << '\n';
    }
}