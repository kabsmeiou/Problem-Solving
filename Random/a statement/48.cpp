#include <bits/stdc++.h>
#define int long long
using namespace std;  
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, m, x;
        cin >> n >> m >> x;
        vector<int> ans(n, 0);
        ans[x - 1] = 1;
        for (int i = 0; i < m; i += 1) {
            int r;
            char c;
            cin >> r >> c;
            vector<int> cur(n, 0);
            for (int j = 0; j < n; j += 1) {
                if (ans[j]) {
                    if (c == '0' || c == '?') {
                        cur[(j + r) % n] = 1;
                    }
                    if (c == '1' || c == '?') {
                        cur[(n + j - r) % n] = 1;
                    }
                }
            }
            ans = cur;
        }
        int cnt = count(ans.begin(), ans.end(), 1);
        if (cnt) {
            cout << cnt << '\n';
            for (int i = 0; i < n; i += 1) {
                if (ans[i]) cout << i + 1 << ' ';
            }
            cout << '\n';
            continue;
        }
        cout << -1 << '\n';
    }
}