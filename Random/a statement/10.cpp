#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        int ans = 0;
        for (int i = 0; i < m; i++) {
            vector<int> cur;
            for (int p = 0; p < n; p++) {
                cur.push_back(a[p][i]);
            }
            sort(cur.begin(), cur.end());
            for (int j = 0; j + 1 < n; j++) {
                ans += abs(((cur[j + 1]) - (cur[j])) * (j + 1) * (n - j - 1));
            }
        }
        cout << ans << '\n';
    }
} 