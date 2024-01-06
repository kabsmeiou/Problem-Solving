#include <bits/stdc++.h>
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        map<int, int> mp;
        vector<vector<int>> c(n);
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            c[i].resize(k);
            for (auto &x : c[i]) {
                cin >> x;
                mp[x]++;
            }
        }
        bool ok = false;
        for (int i = 0; i < n; i++) {
            bool cur = true;
            for (int j = 0; j < c[i].size(); j++) {
                cur &= (mp[c[i][j]] > 1);
            }
            ok |= cur;
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
}