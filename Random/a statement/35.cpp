#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, k, m;
        string s;
        cin >> n >> k >> m >> s;
        vector<int> cnt(27, 0);
        for (int i = 0; i < m; i++) {
            cnt[s[i] - 'a'] += 1;
        }
        int pos = -1;
        for (int i = 0; i < k; i++) {
            if (cnt[i] < n) {
                pos = i;
                break;
            }
        }
        if (pos == -1) {
            vector<bool> ok(k, false);
            int cur = 0;
            string ans = "";
            for (int i = 0; i < m; i++) {
                if (!ok[s[i] - 'a']) {
                    ok[s[i] - 'a'] = true;
                    cur += 1;
                    if (cur == k) {
                        cur = 0;
                        ok.assign(k, false);
                        ans += s[i];
                    }
                }
            }
            if (ans.size() < n) {
                cout << "NO" << '\n';
                cout << ans;
                for (int i = 0; i < k; i++) {
                    if (!ok[i]) {
                        for (int j = ans.size(); j < n; j++) {
                            cout << char(i + 'a');
                        }
                        break;
                    }
                }
                cout << '\n';
                continue;
            } else {
                cout << "YES" << '\n';
            }
        } else {
            cout << "NO" << '\n';
            for (int i = 0; i < n; i++) {
                cout << char(pos + 'a');
            }
            cout << '\n';
        }
    }
}