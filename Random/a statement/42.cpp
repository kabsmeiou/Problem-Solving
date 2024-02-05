#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int m;
        cin >> m;
        vector<vector<int>> a(m);
        for (int i = 0; i < m; i += 1) {
            int n;
            cin >> n;
            for (int j = 0; j < n; j += 1) {
                int x;
                cin >> x;
                a[i].push_back(x);
            }
        }
        set<int> cur;
        vector<int> ans(m);
        bool ok = true;
        for (int i = m - 1; i >= 0; i -= 1) {
            bool has_winner = false;
            for (int j = 0; j < a[i].size(); j += 1) {
                if (cur.insert(a[i][j]).second) {
                    ans[i] = a[i][j];
                    has_winner = true;
                }
            }
            if (!has_winner) {
                ok = false;
                break;
            }
        }
        if (!ok) {
            cout << -1 << '\n';
            continue;
        }
        for (int i = 0; i < m; i += 1) {
            cout << ans[i] << " \n"[i == m - 1];
        }
    }
}