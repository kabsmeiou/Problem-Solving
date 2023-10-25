#include <bits/stdc++.h>
#define int long long
signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int T;
    std::cin >> T;
    while (T--) {
        int n, m, h;
        std::cin >> n >> m >> h;
        int ans = 1;
        std::pair<int, int> rudolf;
        for (int i = 0; i < n; i++) {
            int cur = 0, pen = 0, pts = 0;
            std::vector<int> ord(m);
            for (int j = 0; j < m; j++) std::cin >> ord[j];
            sort(ord.begin(), ord.end());
            for (auto k : ord) {
                if (cur + k > h) break;
                pts++;
                cur += k;
                pen += cur;
            }
            if (i == 0) {
                rudolf = {pts, pen};
                continue;
            }
            ans += (rudolf.first < pts || rudolf.first == pts && rudolf.second > pen);
        }
        std::cout << ans << '\n';
    }
}