#include <bits/stdc++.h>
int main() {
    int tt;
    std::cin >> tt;
    while (tt--) {
        int n;
        std::cin >> n;
        std::vector<std::set<int>> vs(n + 1);
        std::set<int> st;
        for (int i = 1; i <= n; i++) {
            int s;
            std::cin >> s;
            for (int j = 1; j <= s; j++) {
                int x;
                std::cin >> x;
                vs[i].insert(x);
                st.insert(x);
            }
        }

        int ans = 0;
        for (auto c : st) {
            std::set<int> tmp;
            for (int i = 1; i <= n; i++) {
                if (!vs[i].count(c)) {
                    for (auto p : vs[i]) {
                        tmp.insert(p);
                    }
                }
            }
            int cur = tmp.size();
            ans = std::max(ans, cur);
        }

        std::cout << ans << '\n';
    }
}